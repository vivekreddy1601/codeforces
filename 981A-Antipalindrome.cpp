//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,r;
    cin>>s;
    r = s;
    reverse(r.begin(),r.end());
    n = s.length();
    int flag = 0;
    set<char>S;
    for(int i=0; i<n; i++){
        S.insert(s[i]);
        if(s[i] == r[i]){
            flag = 1;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        cout<<n<<endl;
    }
    else if(flag == 1 && S.size() != 1){
        cout<<n-1<<endl;
    }
    else if(S.size() == 1){
        cout<<0<<endl;
    }
    return 0;
}
