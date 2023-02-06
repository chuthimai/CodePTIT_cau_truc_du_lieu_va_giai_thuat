
n = int(input())
arr = input()
arr = arr.split(" ")
arr_unique = []

for i in arr:
    if i not in arr_unique:
        arr_unique.append(i)

for i in arr_unique:
    print(i, end=" ")