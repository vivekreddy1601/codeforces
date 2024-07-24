//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int x,n,o=0,e=0;
        cin >>x>> n;
        while(x--){
            int t;
            cin >> t;
            if(t&1)
                o++;
            else
                e++;
        }
        int m = min(e,n-1);
        int d = n - m;

        if(d % 2 == 0){
            d++;
        }
        if(o >= d && d <= n)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
