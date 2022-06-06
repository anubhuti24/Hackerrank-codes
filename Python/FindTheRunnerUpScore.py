if __name__ == '__main__':
    n = int(input())
    l1=map(int,input().split())
    l1.sort()
    k=0
for i in range(0,n):
    if l1[i]<l1[n-1]:
        k+=1
print(l1[k-1])