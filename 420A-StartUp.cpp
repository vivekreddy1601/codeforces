//code by Vivek Reddy
#include <iostream>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    long long l = s.size();
    bool check = true;
    for(int i = 0; i < l;i++){
        if(s[i]!='A'&&s[i]!='H'&&s[i]!='I'&&s[i]!='M'&&s[i]!='O'&&s[i]!='T'&&s[i]!='U'&&s[i]!='V'&&s[i]!='W'&&s[i]!='X'&&s[i]!='Y')
        {
            check = false;
            break;
        }    
    }
    if(check){
        for(int i = 0,j=l-1;i < j;i++,j--){
            if(s[i]!=s[j]){
                check = false;
                break;
            }
        }
    }
    if(check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}