#include <iostream>
using namespace std;
class queue
{
  private:
	int rare;
	int front;
	int size=5;
	int arr[5]={0,0,0,0,0};

  public:
	queue()
	{
		rare = -1;
		front = -1;
	
	}
	bool isempty()
	{
		if (rare == -1 && front == -1)
		{
			cout << "queue is empty " << endl;
			return true;
		}
		else
		{
			cout << "queue is not empty" << endl;
			return false;
		}
	}
	bool isfull()
	{
		if (rare==(size-1) || count()==4)
		{
			cout << "queue is full" << endl;
			return true;
		}
		else
		{
			cout << "queue is not full" << endl;
			return false;
		}
	}
	void enqueue(int n)
	{
		if (isfull())
		{
			
			return;
		}
		else if (isempty())
		{
			rare = 0;
			front=0;
			arr[rare]=n;
		}
		else{
			
			rare++;
			arr[rare] = n;}
		cout<<n<<" is added sucessfully!"<<endl;}	
	int dequeue()
	{
		int x;
		if (isempty())
		{
			cout<<"already empty"<<endl;
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
			front++;
		}

		cout << x << " is removed" << endl; 			return x;}
		int count(){
			return (rare-front+1);}};

int main()
{
	queue q1;
	q1.isempty();
	q1.dequeue();
	cout << "----------------" << endl;	
	q1.enqueue(5);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(1);
	
	cout << "----------------" << endl;
	q1.isfull();
	cout << "----------------" << endl;
	q1.dequeue();

	cout << "----------------" << endl;
	q1.isfull();
	
	

	cout << "----------------" << endl;

	return 0;
}
