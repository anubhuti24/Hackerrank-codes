if __name__ == '__main__':
    n = input()
    integer_list = map(int, input().split())
    t=tuple(integer_list)
    print(hash(t))
