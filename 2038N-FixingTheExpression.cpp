//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string x;
        cin >> x ;
        char ca = x[0],cb = x[2],cc = x[1];
        int a = ca+'0', b = cb+'0';
        if(cc=='<'){
            if(a > b){
                x[1]='>';
            }else if(a == b){
                x[1]='=';
            }
        }else if(cc=='='){
            if(a != b){
                x[0] = x[2];
            }
        }else{
            if(a < b){
                x[1]='<';
            }else if(a == b){
                x[1]='=';
            }
        }
        cout << x << '\n';
    }
    return 0;
}
