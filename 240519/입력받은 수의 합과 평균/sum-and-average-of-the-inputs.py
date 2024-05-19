n = int(input())
sum_v = 0
cnt = 0

for i in range(n):
    a = int(input())
    sum_v += a
    cnt += 1

avg = sum_v / cnt

print(sum_v, round(avg, 1))