#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int sum=(*a)+(*b);
    int difference=(*a)-(*b);
    if(difference<0)
    {
        difference=-(difference);
    }
    cout<<sum<<endl;
    cout<<difference<<endl; 
}

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    update(&a,&b);
    return 0;
}
