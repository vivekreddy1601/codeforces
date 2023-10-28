//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt = 8,w=0,b=0;
    while(vt--){
        string s;
        cin >> s;
        for(int i = 0; i < s.size();i++){
            if(s[i]!='.'){
                if(s[i]>'A'&&s[i]<'Z'){
                    if(s[i]=='Q')
                        w+=9;
                    else if(s[i]=='R')
                        w+=5;
                    else if(s[i]=='B'||s[i]=='N')
                        w+=3;
                    else if(s[i]=='P')
                        w+=1;
                }else{
                    if(s[i]=='q')
                        b+=9;
                    else if(s[i]=='r')
                        b+=5;
                    else if(s[i]=='b'||s[i]=='n')
                        b+=3;
                    else if(s[i]=='p')
                        b+=1;
                }
            }
        }
    }
    if(w > b)
        cout << "White" << endl;
    else if(w < b)
        cout << "Black" << endl;
    else
        cout << "Draw" << endl;
    return 0;
}
