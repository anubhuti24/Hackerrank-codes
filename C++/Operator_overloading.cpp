#include<iostream>
#include<vector>
using namespace std;

class Matrix
{
    public:
    vector<vector<int>>a;
    Matrix operator+(Matrix& y)
    {
        Matrix mat;
        for(int i=0;i<y.a.size();i++)
        {
            for(int j=0;j<y.a[i].size();j++)
            {
                this->a[i][j]=this->a[i][j]+y.a[i][j];
            }
        }
        return *this;
    }
};
