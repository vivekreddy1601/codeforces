//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,x = 1;
        cin >>n;
        for(int i = 1; i < 50;i++){
            x = (2*x)+1;
            if(n%x)
                continue;
            cout << n/x << endl;
            break;
        }
    }
    return 0;
}
