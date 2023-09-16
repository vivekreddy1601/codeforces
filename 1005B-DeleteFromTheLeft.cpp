//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    if(a[a.size()-1]!=b[b.size()-1])
        cout << a.size()+b.size() << endl;
    else{
        int c =0;
        for(int i = a.size()-1,j=b.size()-1; i < a.size() && j < b.size();i--){
            if(a[i]==b[j]){
                c++;
                j--;
            }else
                break;
        }
        cout << a.size()+b.size()-(2*c) << endl;
    }
    return 0;
}