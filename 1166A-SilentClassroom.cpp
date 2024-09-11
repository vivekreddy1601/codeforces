//code by Vivek Reddy
#include <iostream>
using namespace std;
int main()
{
    int vt,x=0,y=0,ans=0;
    cin >> vt;
    int a[26]={0};
    while(vt--){
        string s;
        cin >> s;
        a[s[0]-'a']++;    
    }
    for(int i = 0;i < 26;i++){
        x = (a[i]/2) + (a[i]%2);
        y = a[i]/2;
        while(x--){
            ans+=x;
        }
        while(y--){
            ans+=y;
        }
    }
    cout << ans << '\n';
    return 0;
}
