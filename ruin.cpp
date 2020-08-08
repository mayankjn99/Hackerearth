#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf =1e18;
#define fr(n) for(ll i = 0 ; i < n ; i++)
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	// cout<<n<<endl;
	fr(n)
	{
		if(i==0&&s[i]=='?'&&s[i+1]=='a')
			s[i]='b';
		else if(i==(n-1)&&s[i]=='?')
		{
			if(s[i-1]=='a')
				s[i]='b';
			else
				s[i]='a';
		}

		else if(s[i]=='?'&&(s[i+1]=='a'||s[i-1]=='a'))
			s[i]='b';
		else if(s[i]=='?')
			s[i]='a';
	}

	cout<<s<<endl;
	return 0;

}