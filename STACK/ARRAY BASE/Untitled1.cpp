#include <iostream>
using namespace std;

int stack[10], top=-1;

 
void push(int data){
	if (top >= 9){
		cout<<"\nStack is full, cannot insert.\n";
	}
	else{
		top++;
		stack[top] = data;
	}
}

 
void pop(){
	if (top <= -1)
	{
		cout<<"\nStack already empty, cannot pop";
	}
	else{
		cout<<"\nYour pop data is: "<< stack[top]<<endl;
		top--;
	}
}
 
 
void peek(){
	cout<<"\nTop element is: "<<stack[top]<<endl;
}

void isfull()
{
	if(top>=9)
	{
		cout<<"\nstact is  full :"<< endl;
		
	}
}

  
  void isempty()
  {
  	if (top <= -1)
  	{
  		cout<<"\nstack is empty"<<endl;
	  }
   } 
   
   
   void display(){
	for(int i=top; i>=0; i--){
		cout<<"|\t"<<stack[i]<<"\t|"<<endl;
	}
}
    
    int main ()
    {
    	push(1);
    	push(2);
    	push(3);
    	push(4);
    	push(5);
    	cout<<"this list is given below"<<endl;
    	display();
    	pop();
       cout<<"the list after pop ="<<endl;
 	    display();
 	 	pop();
//       cout<<"the list after pop ="<<endl;
// 	    display();
 	 cout<<"the list after  peek is= "<<endl;
 	 peek();
 	 display();
 	 
  cout<<"the list is  empty="<<endl;
     isempty();
 	 display();
 	 
 	 cout<<"the list is  full="<<endl;
 isfull();
 	 display();
    	
	}