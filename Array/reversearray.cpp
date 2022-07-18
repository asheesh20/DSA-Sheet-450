/*

Link : https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

*/

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void reversearry(int [],int );
void print(int [],int );
int32_t main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	reversearry(a,n);
	print(a,n);
}
void reversearry(int a[],int n){
	int start=0,end=n-1;
	while(start<end){
		swap(a[start],a[end]);
		start++;
		end--;
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

/*
TC : O(N)
SC : O(1)

