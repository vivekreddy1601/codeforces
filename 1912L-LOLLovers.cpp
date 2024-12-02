//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int na = 0, nb = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i]=='L')
            na++;
        else if(s[i] == 'O')
            nb++;
    }
    int ans = -1,x=0,y=0;
    for(int i = 0;ans < 0 && i+1 < s.size();i++){
        if(s[i]=='L') 
            x++;
        else if(s[i]=='O')
            y++;
        if((x != na - x) && (y != nb - y)){ans = i + 1;}
    }
    cout << ans << '\n';
    return 0;
}
