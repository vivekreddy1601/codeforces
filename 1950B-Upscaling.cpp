//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,c1=0,c2=0;
        cin >> n;
        for(int i = 0;i < n;i++){
            if(i%2!=0){
                c1=1;
                c2=1;
            }else{
                c1=0;
                c2=0;
            }
            for(int j = 0;j < n;j++){
                if(c1==0){
                    cout << "##";
                    c1=1;
                }else{
                    cout << "..";
                    c1=0;
                }
            }
            cout << '\n';
            for(int j = 0;j < n;j++){
                if(c2==0){
                    cout << "##";
                    c2=1;
                }else{
                    cout << "..";
                    c2=0;
                }
            }
            cout << '\n';
        }
    }
    return 0;
}
