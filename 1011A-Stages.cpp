//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int n,k,sum=0;
    cin >> n >> k;
    string s;
    cin >> s;
    int a[26]={0};
    for(int i = 0;i < n;i++){
        a[s[i]-'a']++;
    }
    for(int i = 0; i < 26 && k > 0;i++){
        if(a[i]>=1 && i != 25){
            a[i+1]= 0;
            sum+=i+1;
            k--;
        }else if(i == 25 && a[i] >= 1){
            k--;
            sum+=26;
        }
    }
    if(k > 0)
        cout << -1 << endl;
    else
        cout << sum << endl;
    return 0;
}
