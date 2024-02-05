//code by Vivek reddy
#include <iostream>
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        string x;
        cin >> x;
        string a(n,'0'),b(n,'0');
        for(int i = 0; i < n;i++){
            if(x[i]=='1'){
                a[i]='1';
                b[i]='0';
                for(int j = i+1;j<n;j++)
                    b[j]=x[j];
                break;
            }else{
                a[i]=b[i]=('0'+(x[i]-'0')/2);
            }
        }
        cout << a << '\n' << b << '\n';
    }
    return 0;
}
