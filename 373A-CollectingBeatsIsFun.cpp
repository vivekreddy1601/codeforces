//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int c[10]={0};
    for(int i = 0; i < 4;i++)
    {
        string t;
        cin >> t;
        for(int j = 0; j < 4;j++){
            if(t[j]!='.')
                c[t[j]-'0']++;
        }
    }
    k*=2;
    bool check = true;
    for(int i= 1; i < 10;i++){
        if(c[i]>k){
            check = false ;
            break;
        }
    }
    if(check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
