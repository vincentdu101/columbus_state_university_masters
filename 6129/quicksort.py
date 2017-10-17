def partition(numbers,low,high):
    i = (low - 1)         
    pivot = numbers[high]
    for j in range(low , high):
        if (numbers[j] <= pivot):
            i = i + 1
            numbers[i],numbers[j] = numbers[j],numbers[i]
    numbers[i+1], numbers[high] = numbers[high], numbers[i+1]
    return (i + 1)

def recusion_quicksort(numbers, low, high):
    if (low < high):
        pivot = partition(numbers, low, high)
        recusion_quicksort(numbers, low, pivot - 1)
        recusion_quicksort(numbers, pivot + 1, high)

def non_recursion_quicksort(numbers, low, high):
    if low < high:
        stack = [0] * len(numbers)
        top = -1
        top += 1
        stack[top] = low
        top += 1
        stack[top] = high

        while (top >= 0):            
            high = stack[top]
            top -= 1
            low = stack[top]
            top -= 1
            pivot = partition(numbers, low, high)
            
            if (pivot - 1 > low):
                top += 1
                stack[top] = low
                top += 1
                stack[top] = pivot - 1

            if (pivot + 1 < high):
                top += 1
                stack[top] = pivot + 1
                top += 1
                stack[top] = high

numbers = [1, 2, 21, 4, 3, 34, 11, 45, 6]
low = 0
high = len(numbers) - 1

print("Before sort:")
print(numbers)

recusion_quicksort(numbers, low, high)

print("After recursion quicksort:")
print(numbers)

numbers = [1, 2, 21, 4, 3, 34, 11, 45, 6]
non_recursion_quicksort(numbers, low, high)

print("After non-recursion quicksort:")
print(numbers)
