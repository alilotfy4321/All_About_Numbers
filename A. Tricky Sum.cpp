#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);
#define ll long long
using namespace std;

//get all power of two  for integer  2^32
   
  vector<ll>getPowers(){
  	
  	 vector<ll>power;
      power.push_back(1);
      for(int i=1 ; i<32 ; i++)
	  {
          power.push_back(power[i-1]*2);
      }	
  	return power;
  }


int main(){
	IOS

  
	int t;
	cin>>t;
	
	while(t--)
	{
		
	  ll n;
	  cin>>n;
	  ll total=0, powersOftwo=0;
	  total=(n*(n+1))/2;
	  vector<ll>power=getPowers();
	  
	  for(int j=0 ; j<32 ; j++){
	  	if(power[j]<=n) 
		  {
	  		 powersOftwo+=power[j];
		  }
		 
	   } 
       
       cout<<total-(2*powersOftwo)<<"\n";
   }
	return 0;
}
