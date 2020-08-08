#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf =1e18;
#define fr(n) for(ll i = 0 ; i < n ; i++)
int main()
{
	ll n;cin>>n; ll a[n+3];
	fr(n)cin>>a[i];
	fr(n){
		if(a[i]%2==1)
			a[i]=1;
		else
			 a[i]=-1;
	}
	ll f[n+3];
	f[0]=a[0];
	for(ll i=1;i<n;i++)
	{
		f[i]=f[i-1]+a[i];
	}
	ll ans=0;
	map < ll ,ll > mp;
	mp[0]=1;
		fr(n){
		ans+=mp[f[i]];
		mp[f[i]]++;

	}
	cout<<ans<<endl;
	return 0;

}