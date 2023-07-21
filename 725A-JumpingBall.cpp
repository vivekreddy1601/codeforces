//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    long long n,sum=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n;i++){
        if(s[i]=='<')
            sum++;
        else
            break;
    }
    for(int i = n-1;i >= 0;i--){
        if(s[i]=='>')
            sum++;
        else
            break;
    }
    cout << sum << endl;
    return 0;
}