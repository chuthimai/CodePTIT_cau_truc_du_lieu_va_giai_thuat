def oneTime():
    m = input()
    while m=='\n':
        m = input()
    bieuThuc = input()
    while bieuThuc=='\n':
        bieuThuc = input()
    arr = bieuThuc.split(" ")
    so = []
    res = 0

    for i in range(len(arr)):
        try:
            a = int(arr[-1])
            so.append(a)
            arr.pop()
        except:
            if arr[-1] == '+':
                res = so[-1]+so[-2]
            if arr[-1] == '-':
                res = so[-1] - so[-2]
            if arr[-1] == '*':
                res = so[-1] * so[-2]
            if arr[-1] == '/':
                res = so[-1] / so[-2]
            arr.pop()
            so.pop()
            so.pop()
            so.append(res)
    print(so[-1])

n = int(input())
for i in range(n):
    oneTime()









