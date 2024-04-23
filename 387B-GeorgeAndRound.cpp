//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m,c=0,j=0;
    cin >> n>>m;
    ll a[n],b[m];
    for(int i = 0; i < n;i++)
        cin >> a[i];
    for(int i = 0;i < m;i++)
        cin >> b[i];
    for(int i = 0; i < n;i++){
        while(j < m){
            if(b[j]>=a[i]){
                c++;
                i++;
            }
            j++;
        }
    }
    cout << max(0ll,n-c) << endl;
    return 0;
}
