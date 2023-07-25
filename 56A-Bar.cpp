//code by Vivek Reddy
#include <iostream>
using namespace std;
int main()
{
    int vt,c = 0;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        if(s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s == "CHAMPAGNE" || s == "GIN" || s == "RUM" || s == "SAKE" || s == "TEQUILA" || s == "VODKA" || s == "WHISKEY" || s == "WINE")   
            c++;
        else{
            int n = 0;
            for(int i = 0; i < s.size();i++){
                if(s[i]>='0'&&s[i]<='9')
                    n=(s[i]-'0')+(n*10);
                else
                    n = 19;
            }
            if(n<18)
                c++;
        }
    }
    cout << c << endl;
    return 0;
}