#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf =1e18;
#define fr(n) for(ll i = 0 ; i < n ; i++)
int main()
{
	ll n,ans=0;
	cin>>n;
	string s,t;
	cin>>s>>t;
	fr(n)
	{
		char ch =s[i];
		char c=t[i];
		if(c==ch)
			continue;
		if(c>ch)
		{
			int val= c- ch ;
			// cout<<val<<endl;
			ans+=val/13+val%13;

		}
		else

		{
			int v1='Z'- ch;
			int v2= c-'A'+1;
			int val=v1+v2;
			// cout<<v2<<endl;
			ans+= val/13+val%13;

		}

	}
	cout<<ans<<endl;
	return 0;

}