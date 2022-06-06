#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
    stringstream ss(str);
    int ptr;
    char ch;
    vector<int>st;
    while(ss>>ptr)
    {
       st.push_back(ptr);
       ss>>ch;
    }
    return st;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
