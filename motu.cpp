/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
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
		ll n,p=0,m=0,pt=0,mt=0;
		cin>>n;
		ll a[n+4];
		fr(n)
		cin>>a[i];
		ll j=n-1;
pt=2*a[j];
			mt+=a[0];
		m++;
	p++;
	ll mi=0,pi=j;
		fr(n){
			
			if(mt>pt){
			
				while(j>mi)
					{
						pi=j;
						if(pt>=mt)
							break;
						j--;
						pt+=2*a[j];
						if(j!=mi)
						p++;
					}
				
			}
				else {
			
					while(i<pi)
					{
						mi=i;
						if(mt>pt)
							break;
						i++;

						mt+=a[i];
						if(i!=pi)
						m++;
						
					}
					
				}
				// cout<<i<<endl;
		}
		cout<<m<<" "<<p<<endl;
		if(m==p)
			cout<<"Tie"<<endl;
			else if(m>p)
			cout<<"Motu"<<endl;
			else
			 cout<<"Patlu"<<endl;

	}
	return 0;

}