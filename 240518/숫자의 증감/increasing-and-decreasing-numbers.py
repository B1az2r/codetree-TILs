inp = input()
arr = inp.split()

c = arr[0]
n = int(arr[1])

if(c == 'A'):
    for i in range(n):
        print(i+1, end=" ")
        i += 1
elif(c == "D"):
    for i in range(n, 0, -1):
        print(i, end=" ")