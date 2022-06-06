from collections import Counter

x=int(input()) #count of shoes
sizes=Counter(map(int,input().split()))
cust=int(input())
total_money=0

for i in range(cust):
    n,m=map(int,input().split())
    if(sizes[n]):
        total_money+=m
        sizes[n]-=1

print(total_money)
