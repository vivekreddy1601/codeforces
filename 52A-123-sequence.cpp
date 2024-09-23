//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,a=0,b=0;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        if(arr[i]==1)
            a++;
        else if(arr[i]==2)
            b++;
    }
    cout << min(n-a,min(n-b,(n-(n-(a+b))))) << '\n';
    return 0;
}
