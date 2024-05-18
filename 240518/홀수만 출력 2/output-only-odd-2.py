inp = input()
arr = inp.split()

a = int(arr[0])
b = int(arr[1])

for i in range(a, b-1, -2):
    print(i, end=" ")