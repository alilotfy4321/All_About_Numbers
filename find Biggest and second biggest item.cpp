#include<bits/stdc++.h>
using namespace std;

int findBiggest(int arr[],int size){
	int big=INT_MIN;
	for(int i=0 ; i<size ; i++){
		
		if(arr[i]>big)
			big=arr[i];
			
	}
	return big;
}

int findSecondBiggest(int arr[],int size,int big){
	
	int diff=INT_MAX;
	int ans=0;
	
	for(int i=0 ; i<size ;i++){
		if(arr[i]==big) continue;
		
		int result=abs(big-arr[i]);
		
    	if(result<diff){
		   diff=result;
		   ans=arr[i];
	  }
	  
	}
	return ans;	
}


int main(){
	
	int arr[]={5,6,9,88,5,555,99};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Second Largest elemnt is : "<<findSecondBiggest(arr,size,findBiggest(arr,size));
	
	return 0;
}
