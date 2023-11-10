//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,k;
    cin >> n >> k;
    ll a[k];
    bool b[901] = {false};
    for(int i = 0;i < k;i++){
        cin >> a[i];
        b[a[i]]=true;
    }
    ll d = 0;
    for(int i = 0;i < k;i++){
        cout << a[i];
        for(int j = 1;j < n;j++){
            d++;
            while(b[d])
                d++;
            cout << " " << d ;
        }
        cout << endl;
    }
    return 0;
}
