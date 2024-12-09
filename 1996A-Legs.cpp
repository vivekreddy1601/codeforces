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
        int h = 0, c = 0;
        c = n/4;
        n%=4;
        h = n/2;
        cout << c+h << endl;
    }
    return 0;
}
