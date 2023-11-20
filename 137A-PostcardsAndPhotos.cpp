//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int t = 1,m=1;
    char c = s[0];
    for(int i = 1;i < s.size();i++){
        if(s[i]!=c||t==5){
            t = 1;
            m++;
            c=s[i];
        }else
            t++;
    }
    //m++;
    cout << m << endl;
    return 0;
}
