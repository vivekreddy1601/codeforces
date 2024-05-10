//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,c=0;
        cin >> n;
        string s;
        cin >> s;
        if(n==1){
            if(s[0]=='U')
                cout << "YES\n";
            else
                cout << "NO\n";
            continue;
        }
        for(auto i : s){
            if(i=='U')
                c++;
        }
        cout << (c%2==0?"NO\n":"YES\n");
    }
    return 0;
}
