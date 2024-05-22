n = int(input())
sat = True

i = 2
while i < n:
    if n % i == 0:
        sat = False
        break
    i += 1

if(sat == True):
    print("P")
else:
    print("C")