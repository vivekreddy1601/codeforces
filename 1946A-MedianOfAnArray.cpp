//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,ans=1;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int x=n/2;
        if(n%2==0)
            x--;
        sort(a,a+n);
        for(int i = x+1;i < n;i++){
            if(a[x]==a[i])  
                ans++;
            else
                break;
        }
        cout << ans << '\n';
    }
    return 0;
}
