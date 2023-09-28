//code by Vivek Reddy
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m,t=0,ans=0;
    cin >> n >> m;
    int a[m]={0};
    vector<string> v;
    t=n;
    while(n--){
        string s;
        cin >> s;
        for(int i = 0;i < m;i++){
            int c = s[i]-'0';
            if(c>a[i])
                a[i]=c;
        }
        v.push_back(s);
    }
    for(int i =0; i < t;i++){
        string s = v[i];
        for(int i = 0; i < m;i++){
            if(s[i]-'0'==a[i]){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}