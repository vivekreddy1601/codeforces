//code by Vivek reddy
#include <iostream>
#define ll long long
using namespace std;
void vivek(){
    ll n;
    cin >> n;
    ll i;
    for(i = 1;i < n;i++){
        if(i*(i+1)>=2*n)
            break;
    }
    ll k = (i*(i+1))/2;
    if(k==n+1)
        cout << i+1 << endl;
    else
        cout << i << endl;
}
int main()
{
    ll vt;
    cin >> vt;
    while(vt--)
        vivek();
    return 0;
}
