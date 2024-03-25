//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        if(n==1){
            cout << 1 << '\n';
            continue;
        }else if(n%2==1){
            cout << -1 << '\n';
        }else{
            for(int i = 1,j=2;i <= n && j <= n;i+=2,j+=2)
                cout << j << ' ' << i << ' ';
            cout << '\n';
        }
    }
    return 0;
}
