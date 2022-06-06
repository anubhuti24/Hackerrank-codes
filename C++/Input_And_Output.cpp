#include<iostream>
using namespace std;

class sum
{
    int a,b,c,s;
    public:
    void add()
    {
        cin>>a>>b>>c;
        s=a+b+c;
        cout<<s<<endl;
    }
};
int main()
{
   sum a1;
   a1.add();
   return 0;
}
