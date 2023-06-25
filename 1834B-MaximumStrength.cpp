//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string a,b;
        cin >> a>> b;
        string s = "";
        for(int i = 0; i < (b.size()-a.size());i++){
            s+='0';
        }
        s+=a;
        int ind = -1;
        for(int i = 0; i < b.size();i++){
            if(s[i]!=b[i]){
                ind = i;
                break;
            }
        }
        if(ind == -1)
            cout << 0 << endl;
        else{
            int ans = 9*((b.size()-ind)-1);
            ans += abs(s[ind]-b[ind]);
            cout << ans << endl;
        }
    }
    return 0;
}
