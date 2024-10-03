//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s,ans="hello";
    cin >> s;
    int n = s.size(),m = 5,j=0;
    for(int i = 0;i < n && j < m;i++){
        if(s[i]==ans[j]){
            j++;
        }
    }
    if(j==5)    
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
