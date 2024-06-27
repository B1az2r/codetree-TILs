n = int(input())

for i in range(n, 0 , -1):
    for j in range(i*2):
        print('*', end="")
        if j == i-1:
            for k in range((n-i)*2):
                print(' ', end="")
    print()