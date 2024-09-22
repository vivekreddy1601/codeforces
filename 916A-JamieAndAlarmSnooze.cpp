//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
int check(ll m)
{
	ll f=0;
	while(m)
	{
		if(m%10==7)
			f=1;
		m/=10;
	}
	return f;
}
int main()
{
    ll x,c=0,hr,mi;
	cin>>x;
	cin>>hr>>mi;
	while(true)
	{
		if(check(hr)||check(mi))
			return cout<<c,0;
		
		if(mi-x<0 or mi-x==-60)
		{
			mi=60+(mi-x);
			if(hr==0)
				hr=23;
			else
				hr--;
		}
		else if(mi==x)
			mi=0;
		else 
			mi=mi-x;
		c++;
	}

    return 0;
}
