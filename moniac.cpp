#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf =1e18;
#define fri(n) for(ll i = 0 ; i < n ; i++)
#define frj(m) for(ll j=0;j<m;j++)
int main()
{
	ll n,m,k,x;
	cin>>n>>m>>k;
	vector< ll >v[n+3]; 
	fri(n)
	{
		frj(m)
		{
			cin>>x;
			v[i].push_back(x);
		}
	}
	
	return 0;

}