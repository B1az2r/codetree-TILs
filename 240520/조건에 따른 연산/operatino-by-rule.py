n = int(input())
cnt = 0

while(n <= 1000):
    if(n % 2 == 0):
        n = n * 3 + 1
        cnt += 1
        # print("even : {} times and n is {}".format(cnt, n))
    elif(n % 2 != 0):
        n = n * 2 + 2
        cnt += 1
        # print("odd : {} times and n is {}".format(cnt, n))


print(cnt)