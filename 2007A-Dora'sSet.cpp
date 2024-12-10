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
        cout << ((b + 1) / 2 - (a / 2)) / 2 << '\n';
    }
    return 0;
}
