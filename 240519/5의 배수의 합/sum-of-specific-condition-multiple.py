inp = input()
arr = inp.split()

a = int(arr[0])
b = int(arr[1])
sum_v1 = 0
sum_v2 = 0

if(a > b):
    for i in range(b, a+1):
        if(i % 5 == 0):
            sum_v1 += i
elif(a < b):
    for i in range(a, b+1):
        if(i % 5 == 0):
            sum_v2 += i

print(sum_v1 + sum_v2)