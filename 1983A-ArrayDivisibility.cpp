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
        for(int i = 1;i <= n;i++){
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}
