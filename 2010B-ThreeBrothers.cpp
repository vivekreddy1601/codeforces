//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int arr[4]={0};
    arr[a]=1;
    arr[b]=1;
    for(int i = 1;i < 4;i++){
        if(arr[i]==0){
            cout << i << '\n';
            return 0;
        }
    }
    return 0;
}
