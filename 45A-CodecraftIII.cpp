//code by Vivek Reddy  
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<string> m={"January","February","March","April","May","June","July","August","September","October","November","December"};
    for(int i = 0; i < 12;i++){
        if(s == m[i]){
            cout << m[(i+k)%12] << endl;
        }
    }
    return 0;
}
