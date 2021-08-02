#include<iostream>
using namespace std;
class node {
	public:
	
	int val;
	node* next;};
int main() {
	node* head ;
	node* one ;
	node* two ;
	node* three;
	
	one=new node();
	two = new node();
	three= new node();
	one->val=1;
	two->val=2;
	three->val=3;
	one->next=two;
	two->next=three;
	three->next=NULL;
	head=one;
	while (head!=NULL){
			cout<<head->val<<"  ";
			head=head->next;}
	return 0;}		
			