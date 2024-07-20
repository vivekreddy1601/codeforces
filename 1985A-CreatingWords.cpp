//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string a,b;
        cin >> a >> b;
        char c = a[0];
        a[0]=b[0];
        b[0]=c;
        cout << a << ' ' << b << '\n';
    }
    return 0;
}
