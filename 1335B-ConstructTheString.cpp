//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,a,b,i=0,j=0;
        cin >> n >> a >> b ;
        string s ="";
        while(s.size()<n){
            if(i < a){
                if(j < b){
                    s+='a'+j;
                    j++;
                    i++;
                }else
                    j = 0;
            }else{
                i = 0;
                // j = 0;
            }
        }
        cout << s << endl;
    }
    return 0;
}