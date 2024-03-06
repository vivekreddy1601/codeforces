//code by Vivek Reddy
#include <iostream>
using namespace std;
int end(int w1,int w2,int rem1,int rem2){
    if(w1>w2+rem2 || w2 > w1+rem1)
        return 1;
    else
        return 0;  
}
int m1(string s){
    int w1=0,w2=0,rem1=5,rem2=5,ans=0;
    for(int i = 0; i < 10;i++){
        if(end(w1,w2,rem1,rem2))
            return ans;
        if(s[i]=='1'||s[i]=='?'){
            w1++;
            rem1--;
        }else if(s[i]=='0') 
            rem1--;
        ans++;
        i++;
        if(end(w1,w2,rem1,rem2)){
            return ans;
        }
        if(s[i]=='1'){
            w2++;
            rem2--;
        }else if(s[i]=='0'||s[i]=='?')
            rem2--;
        ans++;
    }
    return 10;
}
int m2(string s){
    int w1=0,w2=0,rem1=5,rem2=5,ans=0;
    for(int i = 0; i < 10;i++){
        if(end(w1,w2,rem1,rem2))
            return ans;
        if(s[i]=='1'){
            w1++;
            rem1--;
        }else if(s[i]=='0'||s[i]=='?') 
            rem1--;
        ans++;
        i++;
        if(end(w1,w2,rem1,rem2))
            return ans;
        if(s[i]=='1'||s[i]=='?'){
            w2++;
            rem2--;
        }else if(s[i]=='0')
            rem2--;
        ans++;
    }
    return 10;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        cout << min(m1(s),m2(s)) << '\n';
    }
    return 0;
}
