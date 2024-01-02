//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >>vt;
    while(vt--){
        string a,b;
        cin >> a >> b;
        int l = b.size()-1;
        for(int i = a.size()-1; i >= 0 && l >= 0;i--){
            if(a[i]==b[l]){
                l--;
            }else{
                for(int j = l-1;j >= 0;j--){
                    if(a[i]==b[j]){
                        l = -2;
                        break;
                    }
                }
            }
            if(l==-2)
                break;
        }
        if(l==-1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
