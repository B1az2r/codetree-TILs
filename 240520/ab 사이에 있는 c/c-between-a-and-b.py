inp = input()
arr = inp.split()

a = int(arr[0])
b = int(arr[1])
c = int(arr[2])

satisfied = False
cnt = 0

for i in range(a, b+1):
    if(i % c == 0):
        cnt += 1
        break

if(cnt >= 1):
    print("YES")
else:
    print("No")