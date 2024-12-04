//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s,ss="";
        cin >> s;
        int c = 0;
        int f = (s[0]-'0')*10;
        f += (s[1]-'0');
        if(f == 0){
            ss+="12";
        }else if(f > 12){
            f -= 12;
            c =1;
            char sss = '0' + (f%10);
            f/=10;
            char ff = '0' + f;
            ss+=ff;
            ss+=sss;
        }else{
            if(f==12)
                c = 1;
            for(int i = 0;i < 2;i++)
                ss+=s[i];
        }
        for(int i = 2;i < s.size();i++){
            ss+=s[i];
        }
        ss+=' ';
        if(c)
            ss+="PM";
        else
            ss+="AM";
        cout << ss << '\n';
    }
    return 0;
}
