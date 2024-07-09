//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,ss,se=0;
        bool ans = false;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            se+=a[i];
        }
        ss = a[0];
        se-=a[0];
        int i = 1;
        if(ss%2==se%2)
            ans = true;
        while(i < n-1){
            if(ss%2==se%2){
                ans = true;
                break;
            }
            ss+=a[i];
            se-=a[i];
            i++;
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}
