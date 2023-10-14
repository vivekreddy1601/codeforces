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
        cout << (n+1)/2 << endl;
        int f=1,l=(3*n)-1;
        while(l>f){
            cout << f << " " <<l << endl;
            f+=3;
            l-=3;
        }
    }
    return 0;
}