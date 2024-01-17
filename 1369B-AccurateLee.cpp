//code by Vivek Reddy
#include <iostream>
using namespace std;
void vivek(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int z = 0, o = 0;
    for(int i = 0;i < n;i++){
        if(s[i]=='0')
            z++;
        else
            break;
    }
    for(int i = n-1;i>=0;i--){
        if(s[i]=='1')
            o++;
        else
            break;
    }
    if(z+o==n)
        cout << s << endl;
    else{
        string a ="0";
        for(int i = 0; i < z;i++)
            a+='0';
        for(int i = 0; i < o;i++)
            a+='1';
        cout << a << endl;
    }
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--)
        vivek();
    return 0;
}
