inp = input()
arr = inp.split()

a = int(arr[0])
b = int(arr[1])
sum_v = 0
avg = 0
cnt = 0
for i in range(a, b+1):
    if(i % 5 == 0 or i % 7 == 0):
        sum_v += i
        cnt += 1        
        avg = sum_v / cnt
print(sum_v, round(avg, 1), end=" ")