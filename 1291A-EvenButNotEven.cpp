//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,si=0;
        cin >> n;
        string s,a="";
        cin >> s;
        if(n<2)
            cout << "-1" << endl;
        else{
            for(int i = 0; i< n && si < 2;i++){
                int t = s[i]-'0';
                if(t%2==1){
                    a+=t+'0';
                    si++;
                }
            }
            if(si<2)
                cout << "-1" << endl;
            else
                cout << a << endl;
        }
    }
    return 0;
}
