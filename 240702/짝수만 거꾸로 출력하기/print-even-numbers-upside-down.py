n = int(input())
num = list(map(int, input().split()))
new = []


    
for elem in num:
    if elem % 2 == 0:
        new.append(elem)

reversed_new = new[::-1]
for j in reversed_new:
    print(j, end=" ")