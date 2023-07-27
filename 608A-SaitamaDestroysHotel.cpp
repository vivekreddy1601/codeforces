//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int t,h,ti=0;
    cin >> t >> h;
    int arr[2000]={0};
    while(t--){
        int a,b;
        cin >> a >> b;
        if(arr[a]<b)
            arr[a]=b;
    }
    for(int i = h;i >=0;){
        if(arr[i]>ti){
            ti++;
        }else{
            i--;
            ti++;
        }
    }
    cout << ti-1 << endl;
    return 0;
}