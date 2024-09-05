//code by Vivek Reddy
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,z=0,o=0;
        cin >> n;
        ll a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i]==0)
                z++;
            else if(a[i]==1)
                o++;
        }
        cout << o*(pow(2,z)) << '\n';
    }
    return 0;
}
