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
		ll mx=0;
		ll a[n+4]={0};
//
		fr(n)cin>>a[i];
		map <ll ,ll >mp;
		vector<ll > v;
		  // to have size of count array 
    int max = *max_element(a, a+n); 
  
    // auxiliary(count) array to  
    // store count. Initialize 
    // count array as 0. Size 
    // of count array will be 
    // equal to (max + 1). 
    int t = max + 1; 
    int count[t]; 
    for (int i = 0; i < t; i++) 
        count[i] = 0;     
  
    // Store count of each element 
    // of input array 
    for (int i = 0; i < n; i++) 
        count[a[i]]++;     
      
    // mode is the index with maximum count 
    int mode = 0; 
    int k = count[0]; 
    for (int i = 1; i < t; i++) 
    { 
        if (count[i] > k) 
        { 
            k = count[i]; 
           
        } 
    }     
     for (int i = 1; i < t; i++) 
    { 
        if (count[i] == k) 
        { 
            
           v.push_back(i);
        } 
    }   

		  	
		  
		  for(ll i=v.size()-1;i>=0;i)
		  	cout<<v[i]<<" ";
		  cout<<endl;

	}
	return 0;

}