//code by Vivek Reddy
#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i*i <= n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < n;i++){
            if((s[i]-'0')!=2 && (s[i]-'0')!=3 && (s[i]-'0')!=5 && (s[i]-'0')!=7){
                c =1;
                cout << 1 << endl;
                cout << s[i] << endl;
                break;
            }   
        }
        if(c==0){
            for(int i =0; i < n;i++){
                int x=0;
                for(int j = i+1; j < n;j++){
                    x = (s[i]-'0');
                    x*=10;
                    x+=(s[j]-'0');
                    if(isPrime(x)==false){
                        cout << 2 << endl;
                        cout << x << endl;
                        c=1;
                        break;
                    }
                }
                if(c == 1)
                    break;
            }
        }
    }
    return 0;
}