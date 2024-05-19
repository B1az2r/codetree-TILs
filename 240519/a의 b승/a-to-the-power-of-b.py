inp = input()
arr = inp.split()

a = int(arr[0])
b = int(arr[1])

cnt = a

for _ in range(a, b+1):
    cnt *= a


print(cnt)