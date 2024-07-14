//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,m,k;
        cin >> n >> m >> k;
        for(int i = n;i>m;i--){
            cout << i << ' ';
        }
        for(int i = 1;i<=m;i++)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
