#include<iostream>
using namespace std;
void funct(int arr[],int n)
{
	int i=0;
	while(i<n){
		int temp =arr[i];
		arr[i]=arr[n-1];
		arr[n-1]= temp;
		i++;
		n--;
	}}
int main(){
	int arry[5] ={1,2,3,4,5};
	int p;
	for(p=0;p<5;p++){
		cout<<arry[p]<<"\t";
		}
	cout<<endl;
	
	funct(arry,5);
	
	int j;
	for(j=0;j<5;j++){
		cout<<arry[j]<<"\t";}
		
	
	
	
	return 0;
}