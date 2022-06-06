import textwrap

def wrap(string, max_width):
    s=''
    Text=textwrap.TextWrapper(width=max_width)
    result=Text.wrap(text=string)
    for i in result:
         s=s+i+'\n'
    return s
if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)