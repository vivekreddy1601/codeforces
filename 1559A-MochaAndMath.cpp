//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,ans;
        cin >> n;
        cin >> ans;
        n--;
        while(n--){
            int x;
            cin >> x;
            ans&=x;
        }
        cout << ans << endl;
    }
    return 0;
}
