//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,m,sum=0;
        cin >> n >> m;
        string s;
        cin >> s;
        int a[7]={0};
        for(int i = 0;i < n;i++){
            a[s[i]-'A']++;
        }
        for(int i = 0;i < 7;i++){
            sum+=max(0,m-a[i]);
        }
        cout << sum << '\n';
    }
    return 0;
}
