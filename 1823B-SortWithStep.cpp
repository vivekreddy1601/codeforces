//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0;i < n;i++)
		    cin >> a[i];
		map<int, set<int>> fq;
		for(int i = 0; i < n; ++i){
			fq[i % k].insert(a[i]);
		}
		int ans = 0;
		for(int i = 0; i < n; ++i){
			if(a[i] != i + 1){
				if(fq[i % k].count(i + 1) == 0) ++ans;
			}
			if(ans > 2){
				ans = -1;
				break;
			}
		}
		if(ans == 2) ans = 1;
		cout << ans << endl;
    }
    return 0;
}
