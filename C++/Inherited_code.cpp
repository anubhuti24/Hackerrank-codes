#include<iostream>
using namespace std;

class BadLengthException
{
    int n;
    public:
    BadLengthException(int number)
    {
        n=number;
    }
    int what()
    {
        return n;
    }
};

