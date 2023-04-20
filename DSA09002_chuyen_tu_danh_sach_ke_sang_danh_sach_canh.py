n = int(input())

Ke = []
for i in range(n):
    dsKe = input().split(' ')
    Ke.append([int(j) for j in dsKe])

for i in range(n):
    for j in Ke[i]:
        if j>i+1:
            print(f"{i+1} {j}")






