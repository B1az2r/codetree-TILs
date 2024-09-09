string = list(input())
length = len(string)

while length > 1:
    num = int(input())
    
    if num >= length:
        string.pop(-1)
        length -= 1

    else:
        string.pop(num)
        length -= 1

    print(''.join(string))