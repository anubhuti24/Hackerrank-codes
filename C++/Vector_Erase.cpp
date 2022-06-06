#include <vector>
#include <iostream>
using namespace std;


int main() {
    int num;
    cin>>num;
    int input;
    vector<int>v1;
    for(int i=0;i<num;i++)
    {
        cin>>input;
        v1.push_back(input);
    }
    int x;   //position of element to be removed
    cin>>x;
    int a,b;  //range of elements to be removed
    cin>>a>>b;
    //removing the element at specified position
    v1.erase(v1.begin()+x-1);
    //removing the elements from the given range
    v1.erase(v1.begin()+a-1,v1.begin()+b-1);//This will include the first element but not last element
    int size=v1.size();
    cout<<size<<endl;
    //Displaying the elements after erasing
    for(int i=0;i<size;i++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
}
