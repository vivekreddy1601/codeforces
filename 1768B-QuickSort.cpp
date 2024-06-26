//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k,t,c=0,s=1;
        cin >> n >> k;
        for(int i= 0; i < n;i++){
            cin >> t;
            if(t==s)
                s++;
            else
                c++;
        }
        cout << (c+k-1)/k << '\n';
    }
    return 0;
}
