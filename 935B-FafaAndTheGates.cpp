//code by Vivek Reddy  
#include <iostream>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;
 
int main()
{
    ll n,x=0,y=0,a=0;
    cin >> n;
    string s;
    cin >>s;
    for(int i= 0; i <n-1;i++){
        if(s[i]=='U')
            y++;
        else    
            x++;
        if(x == y && s[i]==s[i+1])
            a++;
    }
    cout << a << endl;
    return 0;
}
