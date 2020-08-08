#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf =1e18;
#define fr(n) for(ll i = 0 ; i < n ; i++)
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{

		ll n;
		cin>>n;
		vector< ll > x,y;
		fr(n)
		{
			ll a,b;
			cin>>a>>b;
			x.push_back(a);
			y.push_back(b);
		}
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		ll ans=max((x[x.size()-1]-x[0]),(y[y.size()-1]-y[0]));
		ans*=ans;
		cout<<ans<<endl;
	}
	return 0;

}