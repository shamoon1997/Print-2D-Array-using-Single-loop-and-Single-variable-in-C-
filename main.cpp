#include <iostream>
using namespace std;

int main() {
	 cout<<" Elements of the array are : ";
    
    int array[3][3];
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            array[i][j]=23 ;
        }
    }
	for(int i= 0 ; i<9 ; i++)
	
    {
        cout<<array[i/3][i%3]<<" ";
    }

	return 0;
}

