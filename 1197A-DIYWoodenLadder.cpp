//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,ans=0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        sort(a,a+n);
        int x = min(a[n-1],a[n-2]);
        ans = n-2;
        while(ans >= x){
            ans--;
        }
        cout << ans << '\n';
    }
    return 0;
}
