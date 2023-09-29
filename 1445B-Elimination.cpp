//code by Vivek Reddy   
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << max(a+b,c+d) << endl;
    }
    return 0;
}