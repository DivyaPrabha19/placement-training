def linear_search(arr, target):
    for i, num in enumerate(arr):
        if num == target:
            return i
    return -1

arr = list(map(int, input("Enter numbers: ").split()))
target = int(input("Enter target: "))
index = linear_search(arr, target)
if index != -1:
    print(f"Target found at index {index}")
else:
    print("Target not found")
