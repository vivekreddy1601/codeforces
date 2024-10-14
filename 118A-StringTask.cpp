//code by Vivek Reddy
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,ans="";
    cin >> s;
    for(auto& i :s){
        i = tolower(i);
    }
    char c[6] = {'a','e','i','o','u','y'};
    for(int i = 0;i < s.size();i++){
        int flag = 0;
        for(int j = 0;j < 6;j++){
            if(s[i]==c[j]){
                flag=1;
                break;
            }
        }
        if(flag == 0){
            ans+=".";
            ans+=s[i];
        }
    }
    cout << ans << '\n';
    return 0;
}
