n = int(input())
odd = 0

for _ in range(1, n+1):
    a = int(input())
    if(a % 2 == 1 and a % 3 == 0):
        odd += a
print(odd)