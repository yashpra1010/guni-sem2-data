/*
	Stack is a container adaptor.
	Stack follows rules of LIFO (last in first out)	
*/
#include<iostream>
#include<stack>
#include<queue>
using namespace std; 
int main() 
{ 
	int size,num; 
	stack <int> s; 
	queue <int> q; 
	cout<<"\n===============| Stack Example |===============\n";
	cout<<"Enter the size of stack:"; 
	cin>>size; 
	cout<<"\nEnter the element of stack:"; 
	for(int i=0;i<size;i++) 
	{ 
		cin>>num; 
		s.push(num); 
	} 
	
	cout<<"\nSize of stack:"<<s.size()<<endl; 
	cout<<"\nOutput of stack element:\n"; 
	while(!s.empty()) 
	{ 
		cout<<s.top()<<"\t"; 
		s.pop();
	} 
	cout<<"\nSize of stack:"<<s.size()<<endl; 
	cout<<"\nInput element in stack:\n"; 
	s.push(999); 
	s.push(888); 
	s.push(777); 
	s.push(666); 
	while(!s.empty()) 
	{ 
		cout<<s.top()<<"\t"; 
		s.pop(); 
	}
	cout<<"\nDeleting 2 values from stack: "<<endl;
	s.push(999); 
	s.push(888); 
	s.push(777);
	s.push(666);
	s.pop();
	s.pop();
	while(!s.empty()) 
	{ 
		cout<<s.top()<<"\t"; 
		s.pop(); 
	}
	cout<<"\n===============| Queue Example |===============\n";
	cout<<"Enter the size of queue:"; 
	cin>>size; 
	cout<<"\nEnter the element of queue:"; 
	for(int i=0;i<size;i++) 
	{ 
		cin>>num; 
		q.push(num); 
	} 
	
	cout<<"\n Size of queue:"<<q.size()<<endl; 
	cout<<"\n Output of queue element:\n"; 
	while(!q.empty()) 
	{ 
		cout<<q.front()<<"\t"; 
		q.pop();
	} 
	cout<<"\n Size of queue:"<<q.size()<<endl; 
	cout<<"\n Input element in queue:\n"; 
	q.push(123); 
	q.push(456); 
	q.push(789); 
	while(!q.empty()) 
	{ 
		cout<<q.front()<<"\t"; 
		q.pop(); 
	}
	cout<<"\nDeleting 2 values from stack: "<<endl;
	q.push(123); 
	q.push(456); 
	q.push(789);
	q.push(121);
	q.pop();
	q.pop();
	while(!q.empty()) 
	{ 
		cout<<q.front()<<"\t"; 
		q.pop(); 
	}
	return 0; 
}