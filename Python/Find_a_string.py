def count_substring(string, sub_string):
    length=len(string)
    lensub=len(sub_string)
    start=count=0
    end=length
    while True:
        pos= string.find(sub_string,start,end)
        if pos!=-1:
            count+=1
            start=pos+lensub-1
        else:
            break
        if start>=length:
            break
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)