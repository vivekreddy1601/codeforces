//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;
double dis(double x1,double y1,double x2,double y2){
    double ans;
    ans = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    return sqrt(ans);
}
int main()
{
    double a,b,n,ans=INT_MAX,x,y,v,cnt;
    cin >> a >> b >> n;
    while(n--){
        cin >> x >> y >> v;
        cnt = dis(a,b,x,y)/v;
        ans = min(ans,cnt);
    }
    printf("%.10lf\n",ans);
    return 0;
}
