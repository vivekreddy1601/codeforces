//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,c=0;
    cin >> n;
    string s;
    cin >> s;
    int a[26]={0};
    for(int i = 0; i < n;i++){
        a[s[i]-'a']++;
    }
    for(int i = 0; i < 26;i++){
        if(a[i]>=2){
            c = 1;
            break;
        }
    }
    if(c==1 || n==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
