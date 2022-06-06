
#include<iostream>
using namespace std;

class Box
{
    int l,b,h;
    public:
    Box(){
        l=0;b=0;h=0;
    }
    Box(int length,int breadth,int height)
    {
        l=length;
        b=breadth;
        h=height;
    }
    Box(Box& d)
    {
        l=d.l;
        b=d.b;
        h=d.h;
    }
    int get_length()
    {
        return l;
    }
    int get_breadth()
    {
        return b;
    }
    int get_height()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l*b*h;
    }
    bool operator < (Box&B)
    {
        if(l<B.l)
        {
            return true;
        }
        else{
            if(b<B.b && l==B.l)
            {
                return true;
            }
            else {
            if(h<B.h && b==B.b && l==B.l)
            {
                return true;
            }
            }
        }
        return false;
    }
    friend ostream& operator<<(ostream& out,Box& B);
};
ostream& operator<<(ostream& out, Box& B)
{
    {
        out<<B.l<<" "<<B.b<<" "<<B.h;
        return out;
    }
}
