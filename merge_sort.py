
def merge(left, right):
    left_index = 0
    right_index = 0
    result = []
    length = len(left) + len(right)
    while len(result) < length:
        if left_index >= len(left):
            result.append(right[right_index])
            right_index += 1
        elif right_index >= len(right):
            result.append(left[left_index])
            left_index += 1
        else:
            if left[left_index] <= right[right_index]:
                result.append(left[left_index])
                left_index += 1
            else:
                result.append(right[right_index])
                right_index += 1

    return list(result)


def merge_sort(array):
    if len(array) <= 1:
        return array
    else:
        mid = len(array) // 2
        left = array[:mid]
        right = array[mid:]

        left = merge_sort(left)
        right = merge_sort(right)

        return list(merge(left, right))


def sort():
    n = int(input())
    arr = input()
    arr = arr.split(" ")
    arr = [int(i) for i in arr]
    arr = merge_sort(arr)

    for i in arr:
        print(i, end=" ")
    print()


n = int(input())
for i in range(n):
    sort()











