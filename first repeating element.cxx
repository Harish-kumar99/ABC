#include<iostream>
using namespace std;



int main(){
	
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	const int N =1e6+2;
	int idx[N];
	for(int i =0;i<N;i++){
		idx[i]=-1; }
	int mindex= 999999;
		
	
	for(int i=0;i<n;i++){
		if(idx[arr[i]]!=-1){
			mindex=min(mindex,idx[arr[i]]);}
		else idx[arr[i]]=i;}
	if(mindex==999999){
		cout<<"no value" ;}
	else cout<<mindex+1;		
	
	return 0;
	
	
	
}