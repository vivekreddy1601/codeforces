//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c=-1,tc=0;
        cin >> n;
        string a;
        cin >> a;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(a[i]==a[j]&&c==-1){
                    c = j%2;
                }else if(a[i]==a[j] && j%2!=c){
                    tc = -1;
                    break;
                }
            }
            c=-1;
            if(tc==-1){
                break;
            }
        }
        if(tc==-1){
            cout << "NO\n";
        }else
            cout <<"YES\n";
    }
    return 0;
}
