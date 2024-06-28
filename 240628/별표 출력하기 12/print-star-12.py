n = int(input())

for i in range(n):
# i가 첫째 줄인 경우 모두 * 넣어줌
    if i == 0:
        for _ in range(n):
            print("*", end = " ")
    else:
# 아닌 경우 j 규칙도 확인 
        for j in range(n):
            if j % 2 == 1 and j >= i:
                print("*", end = " ")
            else:
                print(" ", end = " ")
    print()