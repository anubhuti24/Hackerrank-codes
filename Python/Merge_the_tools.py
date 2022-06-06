def merge_the_tools(string, k):
    split_string=[]
    j=0
    for i in range(0,len(string),k):
        split_string.append(string[i:i+k])
    while j<(len(split_string)):
        result="".join(dict.fromkeys(split_string[j]))
        print(result)
        j+=1
if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)