//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
 
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll min = 2,max=2*n;
        for(int i = 0; i < n;){
            if(i < n){
                cout << max << " ";
                max-=2;
                i++;
            }
            if(i < n){
                cout << min << " ";
                min+=2;
                i++;
            }
        }
        cout << endl;
        min = 1;
        max = (2*n)-1;
        for(int i = 0; i < n;){
            if(i < n){
                cout << min << " ";
                min+=2;
                i++;
            }
            if(i == 1){
                cout << n+1 << " ";
                i++;
                max-=2;
                continue;
            }
            if(i == n-1){
                cout << (2*n)-1;
                i++;
                max-=2;
                continue;
            }
            if(i < n){
                cout << max << " ";
                max-=2;
                i++;
            }
        }
        cout << endl;
    }
    return 0;
}