if __name__ == '__main__':
   
    lst = []
    for _ in range(int(input())):
        name = input()
        score = float(input())       
        lst.append([score,name])
    lst.sort()
    for i in range(len(lst)):
         if lst[i][0]> lst[0][0]:
            print(lst[i][1])
            
            if i+1 >= len(lst) or lst[i+1][0] > lst[i][0]:
                break 