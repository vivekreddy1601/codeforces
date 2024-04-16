//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n,x,y,a,b,count=0;
    cin >> n >> x >>y >> a >> b;
    string s;
    cin >> s;
    int d1 = a-x;
    int d2 = b-y;
    char c1,c2;
    if(d1>0)
        c1='E';
    else
        c1 = 'W';
    if(d2 > 0)
        c2 = 'N';
    else
        c2 = 'S';
    d1 = abs(d1);
    d2 = abs(d2);
    for(int i = 0; i <n;i++){
        if(s[i]==c1)
            d1--;
        else if(s[i]==c2)
            d2--;
        count++;
        if(d1<=0 && d2 <= 0)
            break;
    }
    if(d1<=0&&d2<=0&&count<=n)
        cout << count << '\n';
    else
        cout << -1 << '\n';
    return 0;
}
