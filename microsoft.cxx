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
	int arr[7] = {1,2,3,5,4,7,10};
	for(int i=0;i<7;i++){
		if(arr[i]%2==1){
			arr[i]=arr[i]*(-1);
			}
			}
	selectsort(arr,7);
	for(int k=0;k<7;k++){
		if(arr[k]<0){
			arr[k]=arr[k]*(-1);}}
			
	for(int p=0;p<7;p++){
			cout<<arr[p]<<endl;}
			return 0;}
			
						