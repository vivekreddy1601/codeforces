//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a;
        cin >> a;
        a = (a%10)+(a/10);
        cout << a << '\n';
    }
    return 0;
}
