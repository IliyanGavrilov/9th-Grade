def sumFile(file):
    #sum all numbers in the file
    sum=0
    for i in file:
        num=int(i)
        sum += num
    return sum

def averageFile(file):
    #print the average integer of all numbers in the file
    sum=0
    counter=0
    for i in file:
        num=int(i)
        sum += num
        counter+=1
    sum = sum/counter
    return sum

def countFile(file):
    #print the count of the numbers in the file
    return len(file)
    
        

def maxFile(file):
    #print the max number from the file
    max_n=l[0]
    for i in file:
        if max_n<i:
            max_n = i
    return max_n

def minFile(file):
    #print the min number from the file
    min_n=l[0]
    for i in file:
        if min_n>i:
            min_n = i
    return min_n

def countEvenFile(file):
    #print the count of the even numbers from the file
    count=0
    for i in file:
        i = int(i)
        if (i%2)==0:
            count+=1
    return count

def countOddFile(file):
    #print the count of the odd numbers in the file
    count=0
    for i in file:
        i = int(i)
        if (i%2)!=0:
            count+=1
    return count

if __name__ == '__main__':
    filename = input()
    f=open(filename, "r")
    r=f.read()
    a=str(r)
    a=a.replace(" ", "\n")
    a=a.replace(",", "\n")
    a=a.replace("-", "\n")
    l=a.split("\n")    
    method = input()
    if method == 'sum':
        print(sumFile(l))
    elif method == 'average':
        print(averageFile(l))
    elif method == 'count':
        print(countFile(l))
    elif method == 'max':
        print(maxFile(l))
    elif method == 'min':
        print(minFile(l))
    elif method == 'even':
        print(countEvenFile(l))
    elif method == 'odd':
        print(countOddFile(l))
        
    #method could be - 'sum', 'average', 'count', 'max', 'min', 'even', 'odd'
    #print the result of the corresponding function
    #the file contains only integer numbers separated by new line, space, dash or comma
    
