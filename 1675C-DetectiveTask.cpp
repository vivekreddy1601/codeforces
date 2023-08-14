//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        ll n = s.size();
        ll z=0,o=0;
        for(int i = 0; i < n;i++){
            if(s[i]=='1')
                o=i+1;
        }
        for(int i = 0; i < n;i++){
            if(s[i]=='0'){
                z=i+1;
                break;
            }
        }
        if(o==0 && z == 0)
            cout << n << endl;
        else if(o==0)
            cout << z << endl;
        else if(z == 0)
            cout << n-o+1 << endl;
        else
            cout << abs(o-z)+1 << endl;
    }
    return 0;
}