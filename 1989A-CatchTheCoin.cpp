//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a,b;
        cin >> a >> b;
        if(b < -1){
            cout << "NO\n";
        }else
            cout << "YES\n";
    }
    return 0;
}
