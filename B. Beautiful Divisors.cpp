#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>powers;
vector<ll> divisors;

//-----
void getPower(){
	for(int s=0 ; s<=32 ; s++ ){
		powers.push_back((ll)pow(2,s));
	}
}
//------
void getFactors(int n){
	
	
	for(int i=1 ; i*i<=n ;i++){
		if(n%i==0){
			
			if(i==n/i)
				divisors.push_back(i);
			else{
				divisors.push_back(i);
			    divisors.push_back(n/i);
			}
		}	
	}
		
	sort(divisors.rbegin(),divisors.rend());
	

	
}
//--------
void checkDivisors(int n){
	//get powers
	getPower();
	//getFactors
	getFactors(n);
	/////////
	for(int i=0 ; i<divisors.size() ; i++ ){
		
		for(int j=1; j<powers.size() ; j++ ){
			
			ll result=(powers[j]-1)*(powers[j-1]);
			
		    	if(divisors[i]==result){
		    		
				cout<<divisors[i]<<"\n"; return ;
	    	}
		}
			
	}
}


int main(){
	
	int n;
	cin>>n;
	checkDivisors(n);
	
	
	system("pause");
	return 0;
}
