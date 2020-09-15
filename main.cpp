#include <iostream>
using namespace std;

int main() {
	 cout<<" Elements of the array are : ";       //getting input from the user 
    
    int array[3][3];                                            //declaring the array
    for(int i=0 ; i<3 ; i++) 
    {
        for(int j=0 ; j<3 ; j++)
        {
            array[i][j]=23 ;                                   //Setting the elements in 2 D array 
        }
    }
	for(int i= 0 ; i<9 ; i++)				//Printing the elements of the array using single loop 
	
    {
        cout<<array[i/3][i%3]<<" ";
    }

	return 0;
}

