line = input()
parts = line.split(' ')
n = parts[0]
m = parts[1]

line = input()
arr = line.split(' ')

A = []
line = input()
A = line.split(' ')

B = []
line = input()
B = line.split(' ')

happiness = 0

for i in arr:
    if i in A:
        happiness+=1
    elif i in B:
        happiness-=1
print(happiness)
