#include<iostream>
using namespace std;

int simpleArraySum(int a[],int size)
{
    int b=0;
    for(int i=0;i<size;i++)
    {
        b=b+a[i];
    }
    return b;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int sum=simpleArraySum(arr,size);
    cout<<sum;
    return 0;
}
