#include<iostream>
using namespace std;

int diagonalDifference(int n)
{
    int arr[n][n];
    int lsum=0,rsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                lsum+=arr[i][j];
            }
            if((i+j)==(n-1))
            {
                rsum+=arr[i][j];
            }
        }
    }
    int abs;
    abs=lsum-rsum;
    if(abs>0)
    {
        return abs;
    }
    else {
        return -(abs);
    }
}
int main()
{
    int n;
    cin>>n;
    int result=diagonalDifference(n);
    cout<<result;
    return 0;
}
