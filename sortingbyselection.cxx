#include<iostream>
using namespace std;
void swap(int* x,int* y){
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
}
void selectsort(int arr[],int n){
	int i,j,mindex;
	for(i=0;i<(n-1);i++){
		mindex=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[mindex]){
				mindex=j;}}
		swap(&arr[mindex],&arr[i]);}}
int main(){
	int arr[5] = {20,4,45,3,44};
	selectsort(arr,5);
	for(int p=0;p<5;p++){
		cout<<arr[p]<<endl;}
		return 0;}				