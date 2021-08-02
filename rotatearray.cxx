#include<iostream>
using namespace std;
void funct(int arr[],int n ,int d){
	int j;
	for(j=0;j<d;j++){
		int temp=arr[0];
		int i ;
		for(i=0;i<n;i++){
			arr[i]=arr[i+1];
		}
		arr[n-1]=temp;
	}
	int k ;
	for(k=0;k<n;k++){
		cout<<arr[k]<<"\t";}
}
int main(){
	int arry[5] ={1,2,3,4,5};
	int p;
	for(p=0;p<5;p++){
		cout<<arry[p]<<"\t";
		}
	cout<<endl;
	
	funct(arry,5,5);
	return 0;
}