//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k,b=0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i = 0; i < n;i++){
            if(s[i]=='B')
                b++;
        }
        if(b == k)
            cout << 0 << endl;
        else if(b > k){
            int d = b-k;
            for(int i = 0; i < n;i++){
                if(s[i]=='B')
                    d--;
                if(d==0){
                    cout << 1 << endl;
                    cout << i+1 << " " << 'A' << endl;
                    break;
                }
            }
        }else{
            int d = k-b;
            for(int i = 0; i < n;i++){
                if(s[i]=='A')
                    d--;
                if(d==0){
                    cout << 1 << endl;
                    cout << i+1 << ' ' << 'B' << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
