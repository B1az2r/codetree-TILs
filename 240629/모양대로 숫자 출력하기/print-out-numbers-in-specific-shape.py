n= int(input())
for i in range(n):
    print("  "*i, end="")
    for j in reversed(range(n-i)):
        print(j+1,end=" ")
    print()