cnt = 0
age_sum = 0
while(True):
    n = int(input())
    if(20 <= n <= 29):
        age_sum += n
        cnt += 1
    else:
        break

avg = age_sum / cnt
print(f"{avg:.2f}")