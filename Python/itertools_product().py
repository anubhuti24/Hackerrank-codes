from itertools import product

A=input().split()
B=input().split()

A=list(map(int,A))
B=list(map(int,B))
m=list(product(A,B))
for i in m:
    print(i,end=' ')
    
