n = int(input())
cnt = 0

while(True):
    
    if(n == 1):
        break

    if(n % 2 == 0):
        n /= 2
        cnt += 1
    elif(n % 2 == 1):
        n = n * 3 + 1
        cnt += 1   


print(cnt)