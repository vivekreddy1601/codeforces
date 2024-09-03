//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    int m = max(a.size(),b.size());
    int d ;
    if(a.size()>b.size())
        d = a.size()-b.size();
    else    
        d = b.size()-a.size();
    string t = "";
    for(int i = 0;i < d;i++)
        t+='0';
    if(a.size()>b.size()){
        for(int i = 0;i < b.size();i++){
            t+=b[i];
        }
        b = t;
    }else{
        for(int i = 0;i < a.size();i++){
            t+=a[i];
        }
        a = t;
    }
    for(int i = 0;i < m;i++){
        int x = a[i]-'0', y = b[i]-'0';
        if(x > y){
            cout << ">\n";
            return 0;
        }else if(x < y){
            cout << "<\n";
            return 0;
        }
    }
    cout << "=\n";
    return 0;
}
