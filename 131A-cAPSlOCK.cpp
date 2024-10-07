//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size(),c=0;
    for(int i = 0;i < n;i++){
        if(s[i]>='A'&&s[i]<='Z')
            c++;
    }
    if(c==n || (c==n-1 && (s[0]>='a'&&s[0]<='z'))){
        for(int i = 0;i < n;i++){
            if(s[i]>='A'&&s[i]<='Z'){
            int t = s[i]-'A';
            s[i] = 'a'+t;
            }
        }
        if(s[0]>='a'&&s[0]<='z' && c==n-1){
            int t = s[0]-'a';
            s[0] = 'A'+t;
        }
    }
    cout << s << '\n';
    return 0;
}
