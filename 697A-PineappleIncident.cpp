#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t,s,x;
    cin >> t >> s >> x;
    if(x-t==0)
        cout << "YES"<<endl;
    else if(x < t)
        cout << "NO" << endl;
    else{
        x-=t;
        if(x==1)
            cout << "NO"<<endl;
        else if(x%s==0||(x-1)%s==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
