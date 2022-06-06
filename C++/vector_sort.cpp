#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector<int> &v, int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main() {
    int N;
    cin>>N;
    vector<int>v;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int s=v.size();
    display(v,s);
    return 0;
}
