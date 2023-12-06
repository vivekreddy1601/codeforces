#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,z=0,o=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i= 0; i < n;i++){
        if(s[i]=='0')
            z++;
        else
            o++;
    }
    cout << n-(2*(min(z,o))) << endl;
    return 0;
}
