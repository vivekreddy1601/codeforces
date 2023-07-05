//code by Vivek Reddy
#include <iostream>
#include <climits>
#define ll long long 
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n];
        for(int i=0; i < n;i++)
            cin >> a[i];
        if(n%2){
            cout << "Mike" << endl;
        }else{
            ll min = INT_MAX;
            ll ind = -1;
            for(int i = 0; i < n;i++){
                if(a[i]<min){
                    min = a[i];
                    ind=i;
                }
            }
            if(ind%2)
                cout << "Mike" << endl;
            else
                cout << "Joe" << endl;
        }
    }

    return 0;
}