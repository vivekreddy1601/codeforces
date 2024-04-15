#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n, m, k;
    	cin >> n >> m >> k;
     
    	ll arr[n];
    	ll ans = 0;
    	for(int i = 0;i < n;i++){
    	    cin >> arr[i];
    	    ans+=arr[i];
    	}
    	ll brr[m];
    	for(int i = 0;i < m;i++)
    	    cin >> brr[i];
    	sort(arr, arr + n);
    	sort(brr, brr + m);
     
     
    	if(k % 2 == 1) {
    		ans += max(0ll, (brr[m - 1] - arr[0]));
    		cout << ans << endl;
    		continue;
    	}
     
    	if(brr[m - 1] >= arr[0]) swap(arr[0], brr[m - 1]);
    	sort(arr, arr + n);
    	sort(brr, brr + m);
    	if(arr[n - 1] >= brr[0]) swap(brr[0], arr[n - 1]);
    	sort(arr, arr + n);
    	sort(brr, brr + m);
    	ans=0;
        for(int i = 0;i < n;i++){
    	    ans+=arr[i];
    	}
    	cout << ans << endl;
    }
    return 0;
}
