//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
	cin >> n;
	if(n % 2 == 0){
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	for(int i = 1 ; i < 2 * n ; i += 2){
		if( (i-1)/2 % 2 == 0){
			cout << i << " ";
		}
		else{
			cout << i + 1 << " ";
		}

	}
	for(int i = 1 ; i < 2 * n ; i += 2){
		if( (i-1)/2 % 2 == 1){
			cout << i << " ";
		}
		else{
			cout << i + 1 << " ";
		}

	}

	return 0;
}
