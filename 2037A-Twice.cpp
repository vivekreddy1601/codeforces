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
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i = 0,j = 1; i < n-1 && j < n;i++,j++){
            if(a[i]==a[j]){
                i++,j++,ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
