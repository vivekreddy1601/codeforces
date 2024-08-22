//code by Vivek Reddy
#include <iostream>
#define  out(f)  f? cout<<"YES\n":cout<<"NO\n"
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        string s;
        cin>>n>>s;
        for(int i=0; i<s.size(); ++i)
        {
            if(s[i]=='0' && s[i+1]=='0')
            {
                s.erase(i+1,1);
                i--;
            }
        }
        int ct=0;
        for(auto x:s)
        {
            if(x=='1')  ct++;
        }
        out(ct>s.size()-ct || s.size()==0);
    }
    return 0;
}
