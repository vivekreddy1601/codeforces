//code by Vivek Reddy
#include <iostream>
#include <vector>
using namespace std;
bool isprime(int n){
    if(n==2)    return true;
    if(n%2==0 || n < 2)  return false;
    for(int i = 3;i*i <= n;i+=2){
        if(n%i==0)  return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<bool> v(n+1,0);
    v[2]=1;
    for(int i=3;i <= n;i+=2){
        if(isprime(i))
            v[i]=1;
    }
    int c1=0,c2=0;
    for(int i = 6;i <= n;i++){
        c1 = 0;
        for(int j = 2;j <= i/2;j++){
            if(i%j==0&&v[j])    
                c1++;
            if(c1>2)break;
        }
        if(c1==2)   c2++;
    }
    cout << c2 << '\n';
    return 0;
}
