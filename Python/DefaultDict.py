from collections import defaultdict

d=defaultdict(list)
n,m=map(int,input().split())

for i in range(1,n+1):
    d[input()].append(i)

for j in range(1,m+1):
    b=input()
    if b in d:
        print(" ".join(str(c) for c in d[b]))
    else:
        print(-1)
    
    


    
