#include <iostream>
using namespace std;
class circular_queue
{
  private:
    int c1;
	int rare;
	int front;
	int size=5;
	int arr[5]={0,0,0,0,0};

  public:
	circular_queue()
	{
		rare = -1;
		front = -1;
		c1=0;
	
	}
	bool isempty()
	{
		if (rare == -1 && front == -1)
		{
			
			return true;
		}
		else
		{
			
			return false;
		}
	}
	bool isfull()
	{
		if ((rare+1)%5==front)
		{
			
			return true;
		}
		else
		{
			
			return false;
		}
	}
	void enqueue(int n)
	{
		if (isfull())
		{
			cout<<"already full cant add elemnt"<<endl;
			return;
		}
		else if (isempty())
		{
			rare = 0;
			front=0;
			arr[rare]=n;
		}
		else{
			
			rare=(rare+1)%5;
			arr[rare] = n;}
		c1=c1+1;
		cout<<n<<" is added sucessfully!"<<endl;}
	int dequeue()
	{
		int x;
		if (isempty())
		{
			cout<<"already empty cant remove anything"<<endl;
			return 0;
		}
		else if (rare == front)
		{
			x = arr[front];
			arr[front]=0;
			rare=-1;
			front=-1;
		}
		else
		{
			x = arr[front];
			arr[front]=0;
			front=(front+1)%5;
		}

		c1--;
		cout << x << " is removed" << endl; 			return x;}
		int count(){
			
			return c1;}};

int main()
{
	circular_queue q1;
	cout<<"is empty " <<q1.isempty()<<endl;
	q1.enqueue(5);
	q1.enqueue(3);
	q1.enqueue(2);
	q1.enqueue(1);
	q1.enqueue(4);
	cout<<q1.count()<<endl;
	cout<<"is full "<<q1.isfull()<<endl;
	q1.dequeue();
	cout<<"is full "<<q1.isfull()<<endl;
	cout<<q1.count()<<endl;
	q1.enqueue(10);
	cout<<"is full "<<q1.isfull()<<endl;
	cout<<q1.count()<<endl;



	return 0;
}
