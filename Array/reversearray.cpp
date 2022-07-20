/*

Link : https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

*/
// USING ARRAY :

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
*/

// USING VECTOR :

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<int> reverse(vector<int> v);
void print(vector<int> v);
int32_t main(){
	vector<int> v;
	v.push_back(11);
	v.push_back(1);
	v.push_back(-9);
	v.push_back(0);
	vector<int> ans=reverse(v);
	print(ans);
}
vector<int> reverse(vector<int> v){
	int start=0,end=v.size()-1;
	while(start<end){
		swap(v[start],v[end]);
		start++;end--;
	}
	return v;
}
void print(vector<int> v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
