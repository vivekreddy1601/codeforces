//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    bool check = true;
    for(int i = 0; i < a.size();i++){
        if((a[i]-'a')<(b[i]-'a')){
            check = false;
            break;
        }
    }
    if(check==false)
        cout << -1  << endl;
    else{
        string c ="";
        for(int i = 0; i < a.size();i++){
            if((a[i]-'a')==(b[i]-'a')){
                if(a[i]!='z')
                    c+=a[i]+1;
                else
                    c+=b[i];
            }else
                c+=b[i];
        }
        cout << c << endl;
    }
    return 0;
}