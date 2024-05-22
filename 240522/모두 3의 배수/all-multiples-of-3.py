sat = True
cnt = 0
for _ in range(5):
    i = int(input())
    if(i % 3 == 0):
        cnt += 1

if(cnt == 5):
    print(1)
else:
    print(0)