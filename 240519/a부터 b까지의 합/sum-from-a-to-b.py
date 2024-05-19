inp = input()
arr = inp.split()

a = int(arr[0])
b = int(arr[1])
sum_v = 0

for i in range(a, b+1):
    sum_v += i
    
print(sum_v)