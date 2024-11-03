//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c=1,ans=-1;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int f = a[0];
        for(int i = 1;i < n;i++){
            if(f==a[i]){
                c++;
            }else{
                c = 1;
                f = a[i];
            }
            if(c==3){
                ans = a[i];
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
