//code by Vivek Reddy
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int ma = INT_MIN;
    for(int i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]>ma){
            int x = sqrt(a[i]);
            int y = x*x;
            if(y != a[i])
                ma = a[i];
        }
    }
    cout << ma << '\n';
    return 0;
}
