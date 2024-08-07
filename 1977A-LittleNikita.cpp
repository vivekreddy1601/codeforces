//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,m;
        cin >> n >> m;
        if(m > n)
            cout << "NO\n";
        else{
            if((n-m)%2==0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
