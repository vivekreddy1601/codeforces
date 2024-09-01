//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,v;
    cin >> n >> v;
    n--;
    if(v >= n)
        cout << n << '\n';
    else{
        int d = n-v+1;
        int ans = v + ((d*(d+1))/2) -1;
        cout << ans << '\n';
    }
    return 0;
}
