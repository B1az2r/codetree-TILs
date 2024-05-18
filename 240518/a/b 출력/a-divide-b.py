inp = input()
arr = inp.split()

a = int(arr[0])
b = int(arr[1])

m =  a // b

for i in range(21):
    m = a // b
    n = a % b
    a = n * 10

    print(m, end="")

    if i == 0:
        print(".", end="")