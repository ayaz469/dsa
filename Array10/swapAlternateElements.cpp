/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }cout<<endl;
}
void swapAlternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};
    swapAlternate(even,8);
    printArray(even,8);
    swapAlternate(odd,5);
    printArray(odd,5);
}
