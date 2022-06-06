if __name__ == '__main__':
    s = input()
    length=len(s)
    a=0
    for i in range(length):
        if s[i].isalnum():
            a+=1
    if a>0:
        print("True")
    else:
        print("False")
        
    a=0
    for i in range(length):
        if s[i].isalpha():
            a+=1
    if a>0:
        print("True")
    else:
        print("False")
        
    a=0
    for i in range(length):
        if s[i].isdigit():
            a+=1
    if a>0:
        print("True")
    else:
        print("False")
    
    a=0
    for i in range(length):
        if s[i].islower():
            a+=1
    if a>0:
        print("True")
    else:
        print("False")
    
    a=0
    for i in range(length):
        if s[i].isupper():
            a+=1
    if a>0:
        print("True")
    else:
        print("False")
