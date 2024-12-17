//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k;
        cin >> n >> k;
        if(k>=n-1){
            cout << 1 << endl;
        }else
            cout << n << endl;
    }
    return 0;
}
