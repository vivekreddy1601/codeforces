//Code by Vivek Reddy
#include <iostream>
#define ll long long 
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k;
        cin >> n >> k;
        if(k==1){
            cout << "YES" << endl;
            for(int i = 1; i <= n;i++){
                cout << i << endl;
            }
            continue;
        }
        if(n%2){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(int i = 1; i <= n*k;){
            int c = 0;
            while(c<k){
                cout << i << " ";
                c++,i+=2;
            }
            cout << endl;
        }
        for(int i = 2; i<=n*k;){
            int c = 0; 
            while(c<k){
                cout << i << " ";
                i+=2,c++;
            }
            cout << endl;
        }
    }
    return 0;
}