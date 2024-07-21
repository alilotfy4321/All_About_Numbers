#include<bits/stdc++.h>
using namespace std;



int checkPalindrom(string arr[],int arrSize){
	int maxLength=-1;
	
	for(int i=0; i<arrSize ;i++){
		
		stack<char>stk;
		string newString;
		int stringSize=arr[i].length();
		
		//push the ith elemnt in arr------
		for(int j=0; j<stringSize ;j++){
			stk.push(arr[i][j]);
		}
		// get the ith element in reverse order---
		for(int k=0; k<stringSize ;k++){
			 newString+=stk.top();
			 stk.pop();
		}
		
		if(newString==arr[i]){
			if(maxLength<stringSize){
				maxLength=i;  // the index of larg string
			}
			else{
				continue;
			}
		}
		
	}
	return maxLength;
	
}


int main(){
string arr[3]={"ala","it wow ti","aaalilaaa"};
int size=sizeof(arr)/sizeof(arr[0]);

int largeIndex=	checkPalindrom(arr,size);
	cout<<"the larget string palindrome is .. \""<<arr[largeIndex]<<"\"";
	return 0;
}
