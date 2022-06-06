#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;



int main() 
{ 
    map <string,int> m;
    int Q = 0;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int type = 0;
        cin>>type;
        string X;
        if (type == 1)
        {
            int Y = 0;
            cin>>X;
            cin>>Y;
            m[X] += Y;
        }
        else if (type == 2)
        {
            cin>>X;
            m.erase(X);
        }
        else
        {
            cin>>X;
            map<string,int>::iterator itr=m.find(X);
            if (itr != m.end())
                cout<<m[X]<<endl;
            else
                cout<<0<<endl;
        }
   }
   return 0;
}