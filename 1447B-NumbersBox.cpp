//code by Vivek Reddy
#include <iostream>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n ,m,neg=0,mi=INT_MAX,s=0;
        cin >> n>> m;
        ll a[n][m];
        for(int i =0;i < n;i++){
            for(int j = 0; j < m;j++){
                cin >> a[i][j];
                if(a[i][j]<0)
                    neg++;
                mi = min(mi,abs(a[i][j]));
                s+=abs(a[i][j]);
            }
        }
        if(neg%2==0)
            cout << s << endl;
        else
            cout << s-(2*mi) << endl;
    }
    return 0;
}