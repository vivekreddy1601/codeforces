//code by Vivek Reddy
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        int arr[n]={0};
        for(int i = 0;i < n;i++){
            string s;
            cin >> s;
            for(int j = 0;j < s.size();j++){
                if(s[j]=='#'){
                    arr[i] = j+1;
                    break;
                }
            }
        }
        reverse(arr,arr+n);
        for(int i= 0;i < n;i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
