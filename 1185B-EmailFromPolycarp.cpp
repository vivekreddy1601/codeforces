//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        int j=0,i=0,c=0;
        string a,b;
        char aa=a[0];
        cin >> a >> b;
        for(;i<a.size();i++){
            if(b[j]!=aa&&b[j]!=a[i]){
                c = 1;
                break;
            }
            if(a[i]==b[j]){
                aa = a[i];
                j++;
                continue;
            }
            while(b[j]==aa)
                j++;
            if(j == b.size()){
                c=1;
                break;
            }
            if(a[i]==b[j]){
                aa = a[i];
                j++;
                continue;
            }else{
                c = 1;
                break;
            }
        }
        while(j < b.size()){
            if(b[j]!=aa){
                c = 1;
                break;
            }
            j++;
        }
        cout << (c==1?"NO":"YES") << '\n';
    }
    return 0;
}
