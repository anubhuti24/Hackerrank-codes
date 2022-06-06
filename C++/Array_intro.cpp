#include <iostream>
using namespace std;

void reverse_array(int arr[],int start,int end)
{
    while(start<end)
    {
        int p=arr[start];
        arr[start]=arr[end];
        arr[end]=p;
        start++;
        end--;
    }
}
int main() {
    int N;
    cin>>N;
    int array[N];
    for(int i=0;i<N;i++)
    {
        cin>>array[i];
    }
    reverse_array(array,0,N-1);
    for(int j=0;j<N;j++)
    {
        cout<<array[j]<<" ";
    }
    return 0;
}
