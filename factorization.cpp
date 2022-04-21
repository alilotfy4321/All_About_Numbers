#include<bits/stdc++.h>
using namespace std;

void printFactors(vector<int>v);
void getFactors(int n);


int main(){
	
	int n;
	cin>>n;
	getFactors(n);
	
	
	system("pause");
	return 0;
}





void printFactors(vector<int>v){
	for(int i=0 ; i<v.size() ; i++){
		cout<<v[i]<<" ";
	}
}

void getFactors(int n){
	vector<int> v;
	
	for(int i=1 ; i*i<=n ;i++){
		if(n%i==0){
			
			if(i==n/i)
				v.push_back(i);
			else{
				v.push_back(i);
				v.push_back(n/i);
			}
		}	
	}
	sort(v.begin(),v.end());
	printFactors(v);
	cout<<"\n";	
}
