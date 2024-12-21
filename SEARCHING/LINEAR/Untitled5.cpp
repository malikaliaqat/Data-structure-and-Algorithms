#include<iostream>
 int linearsearch(int arr[],int size,int element )
 {

   for (int i=0; i<size; i++)
  {
  	if( arr[i]==element)
  	
	  {
	  	return i;
	  }
}
	  	return -1;

}
using namespace std ;
int main ()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size = sizeof (arr)/sizeof (int);
	int element;
	cout<<"enter the element :"<<endl;
	cin>>element;
	int searchindex= linearsearch( arr, size, element );
printf("the element %d was found at index %d \n",element, searchindex);
	return 0;
}