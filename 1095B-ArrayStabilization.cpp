//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,min1=100001,min2=100001,max1=0,max2=0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]<min1){
            min2=min1;
            min1=a[i];
        }else if(a[i]<min2){
            min2 = a[i];
        }
        if(a[i]>max1){
            max2 = max1;
            max1 = a[i];
        }else if(a[i]>max2)
            max2 = a[i];
    }
    cout << min(max1-min2,max2-min1) << endl;
    return 0;
}