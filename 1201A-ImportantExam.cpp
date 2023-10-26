//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,sum=0;
    cin >> n >> m;
    string s[n];
    int a[m];
    for(int i = 0; i < n;i++){
        cin >> s[i];
    }
    for(int i = 0; i < m;i++)
        cin >> a[i];
    for(int i = 0; i < m;i++){
        int c[5]={0};
        for(int j = 0; j < n;j++){
            string t = s[j];
            c[t[i]-'A']++;
        }
        sort(c,c+5);
        sum+=(c[4]*a[i]);
    }
    cout << sum << endl;
    return 0;
}
