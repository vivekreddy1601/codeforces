//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b;
        cin >> a >> b;
        ll d = abs(a-b);
        if(a>b)
            cout << d << " " << min(d-(a%d),b%d) << endl;
        else if(b > a)
            cout << d << " " << min(d-(b%d),a%d) << endl;
        else
            cout << 0 << " " << 0 << endl;
    }
    return 0;
}