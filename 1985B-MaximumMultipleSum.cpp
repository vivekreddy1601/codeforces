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
        if(n>=4)
            cout << "2\n";
        else
            cout << n << '\n';
    }
    return 0;
}
