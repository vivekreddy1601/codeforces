//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,d,s=0,x=0,t;
    cin >> n >> d;
    x = (n-1)*10;
    for(int i = 0;i < n;i++){
        cin >> t;
        s+=t;
    }
    if(x+s>d)
        cout << -1 << '\n';
    else
        cout << ((d-(x+s))/5) + (x/5) << '\n';
    return 0;
}
