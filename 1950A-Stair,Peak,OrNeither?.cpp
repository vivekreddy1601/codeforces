//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a < b && b < c)
            cout << "STAIR\n";
        else if(a < b && b > c)
            cout << "PEAK\n";
        else
            cout << "NONE\n"; 
    }
    return 0;
}
