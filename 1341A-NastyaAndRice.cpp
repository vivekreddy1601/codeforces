//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,a,b,c,d;
        cin >> n >> a >> b >> c >> d;
        int gmax = (a+b)*n;
        int gmin = (a-b)*n;
        int pmax = c+d;
        int pmin = c-d;
        if(gmax < pmin || gmin > pmax)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}