//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll a,b,c;
        cin >> a >> b >> c;
        if(a>b+c+1 || b >a+c+1 || c >a+b+1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}