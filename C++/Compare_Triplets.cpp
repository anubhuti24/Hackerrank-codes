#include<iostream>
using namespace std;

void compareTriplets()
{
    int a[3],b[3],countA=0,countB=0,c[2];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            countA++;
        }
        else {
        if(a[i]<b[i])
        {
            countB++;
        }
        }
    }
    c[0]=countA;
    c[1]=countB;
    cout<<c[0]<<" "<<c[1];
}
int main()
{
    compareTriplets();
    return 0;
}
