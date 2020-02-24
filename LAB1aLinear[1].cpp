//Using divide and conquer method to recursively implement Linear Search 

#include <iostream>  
using namespace std;

int fnLinSearch(int [], int, int);  
int main(void)  
{ 
	int iaArr[20],iNum,iKey;  
	int i,iPos=0;  
	
	cout<<"\nEnter the size of the array\n";  
	cin>>iNum;  
	cout<<"\nEnter the elements of the array:\n";  
	
	for(i=0;i<iNum;i++) 
		cin>>iaArr[i];  
	cout<<"\nenter the key element\n"; 
	cin>>iKey; 
	iPos=fnLinSearch(iaArr,iKey,iNum);  

	if(iPos==-1) 
		cout<<"\nElement not found\n"; 
	else cout<<"\nElement found at position"<<iPos;
	  
	
	return 0;  
}  

int fnLinSearch(int A[], int k, int iN)  
	{  
		if( iN ==0) 
			return -1; 
		else if( k == A[iN-1]) 
			return iN; 
		else 
			return fnLinSearch(A,k,iN-1);  
	} 
