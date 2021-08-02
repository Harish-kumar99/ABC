#include<iostream>
#include<string>
using namespace std;
int main(){
	string s ="wwwwhhhhhjhhhjjjhhh";
	int l=s.length();
	cout<<l;
	int p=0,count=0;
	for(int i =0;i<=l;i++){
		
		if(s[p]==s[i]){
			count++;}
		else {
			cout<<s[p]<<count;
			count=1;
			p=i;
			
			}	
		
		
		
		
	}
				
		
	
	
	
	
	
	return 0;}				
					
			
			
		