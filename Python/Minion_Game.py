def minion_game(string):
    vowels='AEIOU'
    Ks=0
    Ss=0
    for i in range(len(s)):
        if s[i] in vowels:
            Ks+=(len(s)-i)
        else:
            Ss+=(len(s)-i)
    if Ks>Ss:
        print("Kevin",Ks)
    elif Ks<Ss:
        print("Stuart",Ss)
    else:
        print ("Draw")

if __name__ == '__main__':
    s = input()
    minion_game(s)