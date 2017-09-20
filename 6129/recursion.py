def partition(arr,low,high):
    i = ( low-1 )         # index of smaller element
    pivot = arr[high]     # pivot
 
    for j in range(low , high):
 
        # If current element is smaller than or
        # equal to pivot
        if   arr[j] <= pivot:
         
            # increment index of smaller element
            i = i+1
            arr[i],arr[j] = arr[j],arr[i]
 
    arr[i+1],arr[high] = arr[high],arr[i+1]
    return ( i+1 )

def recusion_quicksort(numbers, low, high):
	if (low < high):
		pivot = partition(numbers, low, high)
		recusion_quicksort(numbers, low, pivot - 1)
		recusion_quicksort(numbers, pivot + 1, high)

def non_recursion_quicksort(numbers, low, high):
	if low < high:
		pivot = partition(numbers, low, high)
		left = numbers[low:pivot-1]
		right = numbers[pivot+1:high]

		while len(left) > 0 || len(right) > 0:
			


numbers = [1, 2, 21, 4, 3, 34, 11, 45, 6]
low = 0
high = len(numbers) - 1

print("Before sort: \n")
print(numbers)

recusion_quicksort(numbers, low, high - 1)

print("After recursion quicksort: \n")
print(numbers)

nonRecursionSorted = non_recursion_quicksort(numbers, low, high)
