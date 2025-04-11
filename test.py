import torch
import time
import os

# Optional: Set environment variable for better memory management
os.environ['PYTORCH_CUDA_ALLOC_CONF'] = 'max_split_size_mb:128'

def allocate_large_tensor_on_gpu():
    # Check if a GPU is available
    if torch.cuda.is_available():
        device = torch.device("cuda")
        print("Using GPU:", torch.cuda.get_device_name(device))
    else:
        print("GPU not available. Exiting.")
        return

    # Target memory usage in bytes (16 GB)
    target_memory = 1 * 1024**3  # 16 GB in bytes

    # Calculate the number of elements needed for a tensor to occupy 16 GB
    element_size = torch.tensor(0, dtype=torch.float32).element_size()  # Each element in a tensor of dtype float32 takes 4 bytes
    num_elements = target_memory // element_size  # Number of elements for 16 GB of memory

    # Try allocating memory step by step to avoid fragmentation
    try:
        print(f"Allocating tensor of size: {num_elements} elements ({target_memory / 1024**3} GB)")

        # Allocate the tensor
        tensor = torch.randn(num_elements, device=device, dtype=torch.float32)

        print(f"Allocated tensor with shape: {tensor.shape}")

        # Perform some heavy computations on the tensor to utilize GPU
        for i in range(100):  # Perform 100 iterations of heavy matrix multiplication
            result = torch.matmul(tensor, tensor.T)  # Matrix multiplication
            if i % 10 == 0:  # Print progress every 10 iterations
                print(f"Iteration {i+1}/100 completed.")
            # Optionally clear memory after each iteration if not needed
            torch.cuda.empty_cache()

        print("Heavy computation completed.")

    except RuntimeError as e:
        print(f"Failed to allocate memory: {e}")

    # Optionally, keep the program running to maintain the allocated memory and computation
    try:
        while True:
            time.sleep(1)  # Keep the program running
    except KeyboardInterrupt:
        print("Memory allocation and computation completed. Press Ctrl+C to stop.")

if __name__ == "__main__":
    allocate_large_tensor_on_gpu()
