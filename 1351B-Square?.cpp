//code by Vivek Reddy
#include <iostream>
#include <utility>
#define ll long long int
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll a,b,a1,b1;
        cin >> a >> b >> a1 >> b1;
        if(a > b)
            swap(a,b);
        if(a1 > b1) 
            swap(a1,b1);
        if(a1+a==b&&a1+a==b1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
