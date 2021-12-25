import random
a = int(input("a = "))
b = int(input("b = "))
c = int(input("c = "))
def triangle_type(a, b, c):
    if a == b == c:
        return "равностранен"
    elif a == b or a == c or b == c:
        return "равнобедрен"
    else:
        return "разностранен"
    
print(triangle_type(a, b, c))
