//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
    string s,ans="";
    cin >> n >> s;
    for(int i = 0;i < n;i++){
        if(s[i]=='o'){
            int c= -1,j=i+1;
            for(;j < n-1;j+=2){
                if(s[j]=='g'&&s[j+1]=='o'){
                    c=1;
                    continue;
                }else{
                    break;
                }
            }
            if(c == 1){
                ans+="***";
                i=--j;
            }else{
                ans+=s[i];
            }
        }else   
            ans+=s[i];
    }
    cout << ans << '\n';
    return 0;
}
