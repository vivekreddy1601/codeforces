//code by Vivek Reddy inspired by Pankaj Kumar
#include <iostream>
using namespace std;
void solve(string s,int n){
    int r = 0,b = 0;
    for(int i = 0; i < n;i++){
        if(s[i]=='W'){
            if((r==0&&b>0)||(r>0&&b==0)){
                cout << "NO" << endl;
                return;
            }
            b = 0,r=0;
        }else{
            if(s[i]=='R')
                r++;
            else
                b++;
        }
    }
    if((r==0&&b>0)||(r>0&&b==0)){
                cout << "NO" << endl;
                return;
    }
    cout << "YES" << endl;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        long long x;
        cin >> x;
        string s;
        cin >> s;
        solve(s,x);
    }
    return 0;
}
