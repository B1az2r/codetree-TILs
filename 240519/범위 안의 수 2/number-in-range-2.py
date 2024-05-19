sum_v = 0
cnt = 0
avg = 0
for _ in range(10):
    a = int(input())
    if(0 <= a <= 200):
        sum_v += a
        cnt += 1
        avg = sum_v / cnt

print(sum_v, round(avg, 1))