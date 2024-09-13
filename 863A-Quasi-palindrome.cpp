//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s,a="";
    cin >> s;
    int i,c=0;
    for(i = s.size()-1;i>=0;i--){
        if(s[i]!='0')
            break;
    }
    for(;i >=0;i--){
        a+=s[i];
    }
    reverse(a.begin(),a.end());
    for(int i = 0,j=a.size()-1;i<j;i++,j--){
        if(a[i]!=a[j]){
            c=1;
            break;
        }
    }
    cout << (c==1?"NO\n":"YES\n");
    return 0;
}
