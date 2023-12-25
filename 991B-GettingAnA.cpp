//code by Vivek reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,c=0;
    float sum = 0;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    float ans = sum/n;
    sort(a,a+n);
    int i = 0;
    while(ans < 4.5){
            sum+=5-a[i];
            i++;
            c++;
            ans=sum/n;
    }
    cout << c << endl;
    return 0;
}
