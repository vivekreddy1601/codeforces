//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a,b,c;
        cin >> a >> b >> c;
        int s = a+b+c;
        if(s&1)
            cout << -1 << '\n';
        else{
            cout << min(a+b,s/2) << '\n';
        }
    }
    return 0;
}
