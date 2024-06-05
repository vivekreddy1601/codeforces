//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        int j = n-1;
        while(j-1>=0 && a[j] <= a[j-1]) j--;
        while(j-1>=0 && a[j-1]<=a[j])   j--;
        cout << j << '\n';
    }
    return 0;
}
