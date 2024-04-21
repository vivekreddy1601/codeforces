//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,m,k;
        cin >> n >> m >> k;
        if(m==1||n==k)
            cout << "NO" << '\n';
        else{
            int x = n/m;
            int y;
            if(n%m==0)
                y = n-x;
            else
                y = n-x-1;
            if(k>=y)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}
