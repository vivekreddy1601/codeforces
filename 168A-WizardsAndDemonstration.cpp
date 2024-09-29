//code by Vivek Reddy
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,x;
    float y;
    cin >> n >> x >> y;
    y/=100;
    int ans = (ceil(float(n)*y))-x;
    if(ans < 0)
        cout << 0 << '\n';
    else
        cout << ans << '\n';
    return 0;
}
