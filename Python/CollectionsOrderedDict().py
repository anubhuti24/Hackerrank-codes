from collections import OrderedDict

n=int(input())
Ordered_dictionary=OrderedDict()

for i in range(n):
    item=input().split()
    price=int(item[-1])
    name=" ".join(item[:-1])
    if(Ordered_dictionary.get(name)):
        Ordered_dictionary[name]+=price
    else:
        Ordered_dictionary[name]=price

for i in Ordered_dictionary.keys():
    print(i,Ordered_dictionary[i])
