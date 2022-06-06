#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Isosceles
{
  public:
  void print() 
  {
      cout<<"I am an isosceles triangle"<<endl;
  } 
};
class Equilateral:public Isosceles
{
    public:
    void display()
    {
        cout<<"I am an equilateral triangle"<<endl;
    }
};   
class Triangle:public Equilateral
{
  public:
  void show(){
  cout<<"I am a triangle"<<endl;
  }  
};
int main() {
     Triangle t;
     t.display();
     t.print();
     t.show();
    return 0;
}
