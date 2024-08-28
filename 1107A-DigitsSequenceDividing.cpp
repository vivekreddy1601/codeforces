//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        string s,a,b;
        cin>>n>>s;
        for(int i=0; i<1; i++){
            a += s[i];
        }
        for(int i=1; i<n; i++){
            b += s[i];
        }
        if(a[0] >= b[0] && b.length() == 1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES"<<endl<<2<<endl;
            cout<<a[0]<<" ";
            for(int i=0; i<b.length(); i++){
                cout<<b[i];
            }cout<<endl;
        }
    }
    return 0;
}
