//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s,a="";
    cin >> s;
    int c = 0,i=0;
    if(s.size()>2){
        for(; i < s.size()-2;){
        if(s[i]=='W'&&s[i+1]=='U'&& s[i+2] =='B' && c!=0){
            i+=3;
            a+=" ";
        }else if(s[i]=='W'&&s[i+1]=='U'&& s[i+2]=='B'){
            i+=3;
        }else{
            a+=s[i];
            i++;
            c=1;
        }
    }
    }
    for(;i < s.size();i++){
        a+=s[i];
    }
    cout << a << endl;
    return 0;
}