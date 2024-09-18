//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,k,co=0,mx=0;
    cin >> n >> k;
    string s;
    cin >> s;
    bool c = false;
    for(int i = 0;i < n;i++){
        if(s[i]=='#'){
            co++;
        }else
            co = 0;
        mx = max(mx,co);
    }
    if(mx<k)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
