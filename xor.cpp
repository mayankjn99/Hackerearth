#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf =1e18;
#define fr(n) for(ll i = 0 ; i < n ; i++)
int main()
{
	ll t;
	cin>>t;
	ll a[t+3];
	fr(t)cin>>a[i];
	sort(a,a+t);
	ll f=1;
	fr(t)
	{
		if(a[i]==a[i+1])
			f=-1;
	}
	cout<<f<<endl;
	return 0;

}