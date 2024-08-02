//code by Vivek Reddy
#include <iostream>
#include <map>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
		cin >> n; 
		map<int, int> m; 
		int ans = 0;
		for(int i = 0, ai; i < n; ++i){
			cin >> ai; 
			++m[ai];
		}
		for(auto i: m){
			ans += (i.second / 3);
		}
		cout << ans << endl;
    }
    return 0;
}
