//code by Vivek Reddy
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        int n = s.size(),c=0;
        for(int i = 0,j=1;j < n;j++){
            string s1 = s.substr(i,j);
            string s2 = s.substr(j,n-j);
            if(s2[0]!='0' && stoi(s1)<stoi(s2)){
                c = 1;
                cout << s1 << ' ' << s2 << '\n';
                break;
            }
        }
        if(!c)
            cout << -1 << '\n';
    }
    return 0;
}
