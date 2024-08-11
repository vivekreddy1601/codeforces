//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        vector < ll > v;
      ll n,i,sz,j,p1,p2,x,y;
      string s;
      cin>>n>>s;
      for(i=0;i<n;i++)
      {
        if(s[i]!='?') v.push_back(i);
      }
      if(v.size()==0)
      {
        for(i=0;i<n;i++)
        {
          if(i%2==0) s[i]='B';
          else s[i]='R';
        }
      }
      else {
      for(j=v[0];j>=0;j--)
      {
        if(s[j]=='B' and s[j-1]=='?') s[j-1]='R';
        else if(s[j]=='R' and s[j-1]=='?') s[j-1]='B';
      }
      for(j=v[v.size()-1];j<n;j++)
      {
        if(s[j]=='B' and s[j+1]=='?') s[j+1]='R';
        else if(s[j]=='R' and s[j+1]=='?') s[j+1]='B';
      }
 
      for(i=0;i<v.size()-1;i++)
      {
        p1=v[i];
        p2=v[i+1];
        if(p2-p1==1) continue;
        else {
             if((p2-p1-1)%2==0) { x=(p2-p1-1)/2; y=x; }
             else { x=(p2-p1-1)/2+1; y=(p2-p1-1)/2; }
             while(x--)
             {
               if(s[p1]=='B' and s[p1+1]=='?') s[p1+1] = 'R';
               else if(s[p1]=='R' and s[p1+1]=='?') s[p1+1] = 'B';
               p1++;
             }
             while(y--)
             {
               if(s[p2]=='B' and s[p2-1]=='?') s[p2-1] = 'R';
               else if(s[p2]=='R' and s[p2-1]=='?') s[p2-1] = 'B';
               p2--;
             }
        }
      }
    }
    cout<<s<<endl;
    }
    return 0;
}
