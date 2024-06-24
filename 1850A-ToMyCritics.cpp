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
        if(max(a,b)+max(min(a,b),c)>=10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
