//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,k,m=0;
    cin >> n >> k;
    string s;
    cin >> s;
    int a[26]={0};
    for(int i = 0; i < s.size();i++){
        a[s[i]-'a']++;
    }
    for(int i= 0; i < 26;i++){
        if(m < a[i])
            m = a[i];
    }
    if(m > k)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
