nums=int(input())
arr = list(map(int, input().split()))

maxsize=0

for i in range(1, 98):
    currentsize = arr.count(i)+arr.count(i+1)
    if currentsize>maxsize:
        maxsize=currentsize
print(maxsize)

