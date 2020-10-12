#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace::std;
const int size=40;
int array[size],n;
void bubble_sort()                     // the main function that will do the algorithmic changes 
{    
    int t;                              // random variable to be put into use
    for (int i=n-1;i>0;i--)
     {
		for(int j=0;j<i;j++)
			{
				if(array[j]<array[j+1])
					{
						t=array[j];                            // algorithm
						array[j]=array[j+1];
						array[j+1]=t;
					}
			}
	 }

}
int main()                               // main function 
{
	system("cls");                 //clearscreen for every new call
	cout<<"A program to Sort a 1-D array in Descending order\n";
	cout<<"Enter number of elements of the array(max 40):\t";
	cin>>n;
	cout<<"Enter Array Elements:\n";
	for(int i=0;i<n;i++)
    cin>>array[i];
    bubble_sort();                       // calling the function
    cout<<"Sorted array:\n";
    for(int j=0;j<n;j++)
    cout<<array[j]<<" ";                     // sorted array output
    system("PAUSE");
    return 0;
}

