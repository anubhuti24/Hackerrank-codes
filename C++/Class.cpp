#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    int age;
    string first_name,last_name;
    int std;
    public:
    void get_age()
    {
        cin>>age;
    }
    void set_age()
    {
        cout<<age<<endl;
    }
    void get_first_name()
    {
        cin>>first_name;
    }
    void set_first_name()
    {
        cout<<first_name<<endl;
    }
    void get_last_name()
    {
        cin>>last_name;
    }
    void set_last_name()
    {
        cout<<last_name<<", ";
    }
    void get_standard()
    {
        cin>>std;
    }
    void set_standard()
    {
        cout<<std<<endl;
    }
    void to_string()
    {
        cout<<age<<","<<first_name<<","<<last_name<<","<<std;
    }
};
int main() 
{
 Student s;
 s.get_age();
 s.get_first_name();
 s.get_last_name();
 s.get_standard();
 s.set_age();
 s.set_last_name();
 s.set_first_name();
 s.set_standard();
 cout<<"\n";
 s.to_string();
 return 0;   
}
