# n이 1024라고 가정하면 x는 10이 되어야 함.
n = int(input())
cnt = 0
while (n != 1):
    n //= 2
    cnt += 1
    
print(cnt)