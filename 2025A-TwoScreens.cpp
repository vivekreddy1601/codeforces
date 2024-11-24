//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string a,b;
        cin >> a >> b;
        int n = min(a.size(),b.size()), c = 0;
        for(int i = 0;i < n;i++){
            if(a[i]==b[i]){
                c++;
            }else{
                break;
            }
        }
        if(c!=0){
            c--;
        }
        int tot = a.size()+b.size()-c;
        cout << tot << '\n';
    }
    return 0;
}
