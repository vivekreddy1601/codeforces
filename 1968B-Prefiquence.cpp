//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,m,ans=0;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        for(int i =0,j=0;i <n&&j < m;j++){
            if(a[i]==b[j]){
                ans++;
                i++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
