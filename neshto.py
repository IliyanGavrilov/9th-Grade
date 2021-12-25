t = int(input())

for _ in range(t):
    n = int(input())
    param =  list(map(int, input().split()))
    if param[0] >= param[-1]:
        last = param[0]
        param.pop(0)
    else:
        last = param[-1]
        param.pop(-1)

    while len(param) > 0:
        if param[0] >= param[-1]:
            if param[0] > last:
                print("No")
                break
            
            last = param[0]
            param.pop(0)
        else:
            if param[-1] > last:
                print("No")
                break
            
            last = param[-1]
            param.pop(-1)
    if len(param) == 0:
        print("Yes")
                                
        
             

