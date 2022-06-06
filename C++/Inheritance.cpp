#include <iostream>
using namespace std;

class Triangle{
    public:
        void tri_show(){
            cout<<"I am a triangle"<<endl;
        }
};
class Isosceles : public Triangle{
    public:
        void iso_show(){
            cout<<"I am an isosceles triangle\n";
            cout<<"In an isosceles triangle two sides are equal"<<endl;
        }
};
int main(){
    Isosceles isc;
    isc.iso_show();
    isc.tri_show();     
    return 0;
}
