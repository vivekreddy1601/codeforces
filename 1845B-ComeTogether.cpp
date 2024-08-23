//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll ax,ay,bx,by,cx,cy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        ll ab = abs(ax-bx) + abs(ay-by)+1;
        ll ac = abs(ax-cx) + abs(ay-cy)+1;
        ll bc = abs(bx-cx) + abs(by-cy)+1;
        ll ans = ab+ac-bc;
        cout << ((ans-1)/2)+1 << '\n';
    }
    return 0;
}
