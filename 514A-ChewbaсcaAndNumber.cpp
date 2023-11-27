//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.size();
    if(s[0]!='9'){
        int f = s[0]-'0';
        if(f > 4)
            s[0]=((9-f)+'0');
    }
    for(int i = 1; i < l;i++){
        int f = s[i]-'0';
        if(f == 0 || f < 5)
            continue;
        else
            s[i]=((9-f)+'0');
    }
    cout << s << endl;
    return 0;
}
