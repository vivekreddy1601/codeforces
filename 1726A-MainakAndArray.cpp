//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        int ans = 0;
		for(int i = 0; i < n - 1; ++i) ans = max(ans, a[i] - a[i + 1]);
		for(int i = 0; i < n - 1; ++i) ans = max(ans, a[n - 1] - a[i]);
		for(int i = 1; i < n; ++i) ans = max(ans, a[i] - a[0]);
		cout << ans << '\n';
    }
    return 0;
}
