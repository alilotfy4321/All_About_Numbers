#include<bits/stdc++.h>
using namespace std;
int powerr(int x,int n);
int main(){
	int x,n;
	cin>>x>>n;
	cout<<powerr(x,n);
	
	return 0;
}


int powerr(int x,int n){
	int temp=1;
	while(n){
		if(n&2!=0){ // n%2!=0
			temp=temp*x;
		}
		
		n=n>>1;//n=n/2;
		x=(x*x);
	}
	
	return temp;
}
