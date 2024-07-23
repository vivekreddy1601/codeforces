//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k;
        cin >> n>> k;
        cout << ((n-1)*k)+1 << '\n';
    }
    return 0;
}
