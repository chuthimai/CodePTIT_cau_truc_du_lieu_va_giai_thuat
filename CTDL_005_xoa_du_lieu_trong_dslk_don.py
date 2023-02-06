
n = int(input())
arr = input()
arr = arr.split(" ")
del_element = int(input())

arr = [i for i in arr if int(i) != del_element]

for i in arr:
    print(i, end=" ")



