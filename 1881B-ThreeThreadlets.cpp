//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a,b,c,f=0;
        cin >> a >> b >> c;
        for(int i = 0; i <= 3 ;i++){
            for(int j = 0; j <= 3;j++){
                for(int k = 0;k <= 3;k++){
                    if(i+j+k > 3)
                        continue;
                    if(a%(i+1)==0 && b%(j+1)==0 && c%(k+1)==0){
                        if(a/(i+1)==b/(j+1) && a/(i+1)==c/(k+1)){
                            f = 1;
                            break;
                        }
                    } 
                }
                if(f)
                    break;
            }
            if(f)
                break;
        }
        if(f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
