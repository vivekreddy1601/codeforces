//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n],b[n],c[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        for(int i = 0; i < n;i++)
            cin >> b[i];
        for(int i = 0;i < n;i++)
            c[i] = b[i]-a[i];
        sort(c,c+n);
        int i = 0, j = n-1,ans=0;
        while(i<j){
            int sum = c[i]+c[j];
            if(sum<0)i++;
            else ans++,i++,j--;
        }
        cout << ans << endl;
    }
    return 0;
}
