#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    string c=a+b;
    cout<<c<<endl;
    char ch =a[0]; 
    char c1=b[0];
    a[0]=c1;
    b[0]=ch;
    cout<<a<<" "<<b;

    return 0;
}
