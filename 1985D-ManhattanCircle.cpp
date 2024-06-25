//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int a,b,flag = 0,i,j,k=0;
        cin >> a >> b;
        char arr[a][b];
        for(int x = 0;x < a;x++){
            for(int y = 0;y < b;y++){
                cin >> arr[x][y];
            }
        }
        for(i = 0;i < a;i++){
            for(j = 0;j < b;j++){
                if(arr[i][j]=='#'){
                    flag++;
                    break;
                }
            }
            if(flag != 0)   
                break;
        }
        while(arr[i][j]=='#' && k < a){
            i++;
            k++;
        }
        cout << i-(k/2) << ' ' << j+1 << '\n';
    }
    return 0;
}
