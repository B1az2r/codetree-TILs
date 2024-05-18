n = int(input())

cls = 0
way = 0
wc = 0

for i in range(1, n+1):
    if(i % 6 == 0 or i % 3 == 0):
        way += 1
    
    if(i % 2 == 0):
        if(i % 12 == 0):
            wc += 1
        else:
            cls += 1
    elif(i % 12 == 0):
        wc += 1

print(cls-1, way, wc)


# n = int(input())

# cls = 0
# way = 0
# wc = 0

# for i in range(1, n+1):
#     if(i % 2 == 0):
#         if(i % 6 == 0 or i % 3 == 0):
#             way += 1
#         elif(i % 12 == 0):
#             wc += 1
#         else:
#             cls += 1

# print(cls, way, wc)