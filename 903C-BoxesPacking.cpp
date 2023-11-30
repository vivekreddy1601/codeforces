//code by Vivek Reddy
#include <iostream>
#include <map>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    map<int,int> frec;
    int mx =0, element;
    for(int i = 0; i < n;i++){
        cin >> element;
        frec[element]++;
        mx = max(mx,frec[element]);
    }
    cout << mx << endl;
    return 0;
}
