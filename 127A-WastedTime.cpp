//code by Vivek Reddy
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n,k;
    double sum = 0;
    cin >> n>> k;
    int a[n][2];
    for(int i = 0;i < n;i++){
        cin >> a[i][0] >> a[i][1];
        if(i!=0){
            sum+= sqrt(pow(a[i][0]-a[i-1][0],2)+pow(a[i][1]-a[i-1][1],2));
        }
    }
    cout << setprecision(10) << sum/50*k << "\n";
    return 0;
}
