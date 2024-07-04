arr = input()
ans = input()
cnt = 0

for i in range(len(arr)):
    if (arr[i] == ans):
        cnt += 1
        
print(cnt)