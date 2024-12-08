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
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int mx1 = 0, cnt1 = 0, cnt2 = 0, mx2 = 0;
        for(int i = 0; i < n; i += 2) {
            mx1 = max(mx1, a[i]);
            ++cnt1;
        }
        for(int i = 1; i < n; i += 2) {
            mx2 = max(mx2, a[i]);
            ++cnt2;
        }
        cout << max(mx1 + cnt1, mx2 + cnt2) << endl;
    }
    return 0;
}
