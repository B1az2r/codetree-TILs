inp = input()
arr = inp.split()

b = int(arr[0])
a = int(arr[1])

while(b >= a):
    print(b, end=" ")
    b -= 2