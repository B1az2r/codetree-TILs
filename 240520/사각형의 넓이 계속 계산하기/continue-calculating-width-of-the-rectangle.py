while (True):
            
    inp = input()
    arr = inp.split()

    a = int(arr[0])
    b = int(arr[1])
    c = arr[2]

    if(c != 'C'):
        print(a * b)
        
    elif(c == 'C'):
        print(a * b)
        break