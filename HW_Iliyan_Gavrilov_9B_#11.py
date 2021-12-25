#Homework Iliyan Gavrilov 9B #11
import math

class Rectangle:
    def __init__(self, width, height, x, y):
        self.width = width
        self.height = height
        self.x = x
        self.y = y

    def area(self):
        return self.width * self.height

    def perimeter(self):
        return (self.width + self.height) * 2

    def diagonal(self):
        return math.sqrt(self.width**2 + self.height**2)

    def __eq__(self, other):
        return max(self.width, self.height) == max(other.width, other.height) \
               and \
               min(self.width, self.height) == min(other.width, other.height)

    def collide(self, other):
        x1 = self.x + self.width
        y1 = self.y - self.height
        otherX1 = other.x + other.width
        otherY1 = other.y - other.height
        #print("(%s, %s), (%s, %s) == (%s, %s), (%s, %s)" % \
         #     (self.x, self.y, x1, y1, other.x, other.y, otherX1, otherY1))
        xCollide = self.x > other.x and self.x < otherX1 or \
                   other.x > self.x and other.x < x1
        yCollide = y1 > otherY1 and y1 < other.y or \
                   otherY1 > y1 and otherY1 < self.y
        return xCollide and yCollide
        

    def intersect(self, other):
        x1 = self.x + self.width
        y1 = self.y + self.height
        otherX1 = other.x + other.width
        otherY1 = other.y + other.height
        area = (min(x1, otherX1)-max(self.x, other.x))*(min(y1, otherY1)-max(self.y, other.y));
        
        return area
    
r1 = Rectangle(6,2,3,4)
r2 = Rectangle(5,2,5,3)
r3 = Rectangle(2,5,6,2)
r4 = Rectangle(4,3,4,9)
r5 = Rectangle(5,5,6,6)
r6 = Rectangle(4,4,4,2)

print(r1.collide(r2))
print(r1.intersect(r2))


        
