#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf =1e18;
#define fr(n) for(ll i = 0 ; i < n ; i++)
int main()
{
	ll n;
	cin>>n;
	ll a[n+3];
	fr(n)
	cin>>a[i];
	int f=0;
	// sort(a,a+n);
	
	fr(n-1)

	{
		a[i+1]=a[i+1]-a[i];

	}
	if(a[n-1]==0)
		f=1;
	
if(f==1)
cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
	return 0;
	

}