//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k,a=0;
        cin >> n >> k;
        while(n && n!=1){
            n-=min(n,k-1);
            a++;
        }
        cout << a << '\n';
    }
    return 0;
}
