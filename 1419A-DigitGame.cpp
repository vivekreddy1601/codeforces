//code by Vivek Reddy
#include <iostream>
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,e=0,o=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i< n;i+=2){
            if((s[i]-'0')%2)
                o++;
        }
        for(int i = 1; i< n;i+=2){
            if((s[i]-'0')%2==0)
                e++;
        }
        if(n%2==1)
            cout << (o>0?'1':'2') << endl;
        else if(n%2==0 && e)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}