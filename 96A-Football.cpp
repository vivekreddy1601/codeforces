//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int z=0,o=0,c=0;
    for(int i = 0; i < s.size();i++){
        if(z==7||o==7){
            c = 1;
            break;
        }
        if(s[i]=='0'){
            z++;
            o = 0;
        }else{
            o++;
            z=0;
        }
    }
    if(z==7||o==7)
        c=1;
    if(c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}