#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf =1e18;
#define fr(n) for(ll i = 0 ; i < n ; i++)


ll  sum(ll  arr[], ll n) 
{ 
  ll ans = 0; 
  
  // Finding sum of the array. 
  for (ll i = 0; i < n; i++) 
    ans += arr[i]; 
  
  return ans * pow(2, n - 1); 
} 
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
	ll a[n+3];
		ll ans=0;
		fr(n)
		{
			a[i]=i+1;
			// ans+=a[i];
		}

		ans=sum(a,n);
		// printSubArrays(a,0,0,0);
		cout<<ans<<endl;
	}
	return 0;

}