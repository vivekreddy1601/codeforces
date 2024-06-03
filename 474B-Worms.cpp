//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ind= 1;
    int worms;
    vector<int> arr(1000006);
    for(int i = 1;i <= n;i++){
        cin >> worms ;
        while(worms--){
            arr[ind]=i;
            ind++;
        }
    }
    int nojuicy;
    cin >> nojuicy;
    while(nojuicy--){
        cin >> worms;
        cout << arr[worms] << '\n';
    }
    return 0;
}
