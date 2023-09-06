//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s,a="";
    cin >> s;
    for(int i = n-2;i >= 0;i-=2){
        a+=s[i];
    }
    if(n&1){
        for(int i = 0;i < n;i+=2)
            a+=s[i];
    }else
        for(int i = 1;i < n;i+=2)
            a+=s[i];
    cout << a << endl;
    return 0;
}