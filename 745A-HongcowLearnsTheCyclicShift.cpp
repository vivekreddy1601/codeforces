//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s,ans;
    cin >> s;
    int n = s.size(),c=1;
    for(int i = 0;i < n;i++){
        ans="";
        for(int j = n-i-1;j<n;j++ ) 
            ans+=s[j];
        for(int j = 0;j < n-i-1;j++)
            ans+=s[j];
        if(ans!=s)
            c++;
        else
            break;
    }
    cout << c << '\n';
    return 0;
}
