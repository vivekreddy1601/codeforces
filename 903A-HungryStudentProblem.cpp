//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        if(n%3==0 || n%7==0)
            cout << "YES" << endl;
        else{
            int t = n,c=0;
            while(t>0){
                t-=7;
                if(t%3==0 && t > 0){
                    c=1;
                    cout << "YES" << endl;
                    break;
                }
            }
            t = n;
            while(t>0 && c == 0){
                t-=3;
                if(t%7==0 && t > 0){
                    c=1;
                    cout << "YES" << endl;
                    break;
                }
            }
            if(c==0)
                cout << "NO" << endl;
        }
    }
    return 0;
}
