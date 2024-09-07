//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c=0;
        string s;
        cin >> n >> s;
        for(int i=0;i < n-1;i++){
            if(c%2==0){
                if(s[i]=='1' && s[i+1]=='0')
                    c++;
            }else{
                if(s[i]=='0' && s[i+1]=='1')
                    c++;
            }
        }
        if(c%2==1){
            if(s[n-1]=='1')
                c++;
        }else if(c!=0){
            if(s[n-1]=='0')
                c++;
        }
        cout << c << '\n';
    }
    return 0;
}
