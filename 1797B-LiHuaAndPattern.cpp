//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b;
        cin >> a >> b;
        ll arr[a+1][a+1];
        for(int i = 1;i <=a;i++){
            for(int j = 1;j <=a;j++)
                cin >> arr[i][j];
        }
        ll sum = 0;
        for(int i = 1;i <= a;i++){
            for(int j = 1;j <= a;j++){
                if(arr[i][j]!=arr[a-i+1][a-j+1])
                    sum++;
            }
        }
        sum/=2;
        if(sum>b)
            cout << "NO" << endl;
        else{
            b-=sum;
            if(a&1)
                cout << "YES" << endl;
            else if(b&1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}