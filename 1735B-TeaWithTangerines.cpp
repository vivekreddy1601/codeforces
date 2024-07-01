//code by Vivek Reddy
#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,mini=INT_MAX,ans=0;
        cin >> n;
        int a[n];
        for(int i= 0; i< n;i++){
            cin >> a[i];
            mini = min(mini,a[i]);
        }
        for(int i= 0;i < n;i++){
            if(a[i]>=mini*2){
                ans+=ceil((a[i]*1.0000)/(2*mini-1))-1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
