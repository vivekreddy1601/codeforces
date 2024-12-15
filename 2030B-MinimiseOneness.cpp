//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
	int vt;
	cin >> vt;
	while(vt--) {
		long long n;
		cin >> n;
		cout << 1 ;
		for(int i = 1; i < n; i++){
		    cout << 0;
		}
		cout << endl;
	}
	return 0;
}
