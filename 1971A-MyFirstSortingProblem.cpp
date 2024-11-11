//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int x,y;
        cin >> x >> y;
        cout << min(x,y) << ' ' << max(x,y) << '\n';
    }
    return 0;
}
