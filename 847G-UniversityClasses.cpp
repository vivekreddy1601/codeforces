//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,o=0,m=0;
    cin >> n;
    string s[1001];
    for(int i = 0;i < n;i++)
        cin >> s[i];
    for(int i = 0;i < 7;i++){
        for(int j = 0;j < n;j++){
            if(s[j][i]=='1'){
                o++;
            }
        }
        m = max(m,o);
        o = 0;
    }
    cout << m << endl;
    return 0;
}
