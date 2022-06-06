#include <iostream>
using namespace std;

int max_of_four(int a,int b,int c,int d)
{
    if(a>b&&a>c&&a>d)
    {
        return a;
    }
    else {
        if(b>a&&b>c&&b>d)
        {
            return b;
        }
        else {
        if(c>a&&c>b&&c>d)
        {
            return c;
        }
        else
        {
            return d;
        }
        }
    }
}
int main() {
    int num1,num2,num3,num4;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    int max=max_of_four(num1,num2,num3,num4);
    cout<<max;
    return 0;
}
