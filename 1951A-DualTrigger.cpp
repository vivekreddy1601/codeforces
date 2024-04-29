//code by Vivek Reddy
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,o=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0;i < n;i++){
            if(s[i]=='1')
                o++;
        }
        if(o%2==1)  
            cout << "NO" << '\n';
        else if(o==2){
            bool check = true;
            if(s.find("11")!=string::npos)
                check = false;
            cout << (check ? "YES":"NO") << '\n';
        }else
            cout << "YES" << '\n';
    }
    return 0;
}
