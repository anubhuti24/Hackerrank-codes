#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
    

		cout<<hex<<left<<showbase<<nouppercase;
        cout<<(long int)A<<endl;
        
        cout<<setprecision(2)<<showpos<<dec<<fixed<<right<<setfill('_')<<setw(15);
        cout<<B<<endl;
        
        cout<<scientific<<setprecision(9)<<uppercase<<noshowpos;
        cout<<C<<endl;
	}
    return 0;

}