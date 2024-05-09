//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a=n,b=0;
        for(int i = 0;i < n;i++){
            if(s[i]=='A')
                a=min(i,a);
            if(s[i]=='B')   
                b = max(i,b);
        }
        if(a > b)
            cout << 0 << '\n';
        else
            cout << b-a << '\n';
    }
    return 0;
}
