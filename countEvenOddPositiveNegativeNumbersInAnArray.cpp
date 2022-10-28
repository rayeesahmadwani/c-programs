//   CODE BY RAYEES AHMAD WANI

//program:- Count even,odd , positive ,negative numbers in an array/list

#include<iostream>
using namespace std;
void oddEvenCount(int[]);
void positiveNegativeCount(int[]);
int main()
{
    int arr[10]={1,2,4,-1,-2,6,11,0,9,3};
   
   //calling a function that counts the number of positive and negative numbers
   positiveNegativeCount(arr);
    //calling a function that counts the number of even and odd numbers in a given array
    oddEvenCount(arr);
    return 0;
}

//function for checking positive and negative numbers in an array
void positiveNegativeCount(int arr[])
{
   int neg=0;
    int pos=0;
    
    for(int i=0;i<10;i++)
    {
        if(arr[i]<0)   //check negative numbers in an array
        {
            neg=neg+1;
        }  
        else 
        {    
         pos=pos+1;
        }
        
    }
    cout<<"positive numbers in a given array are:"<<pos<<" \n";
    cout<<"negative numbers in a given array are:"<<neg<<"\n";

}



//function for counting the odd/even numbers
void oddEvenCount(int arr[])
{
    int oddCount=0;
    int evenCount=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            evenCount=evenCount+1;

        }
        else
        {
            oddCount=oddCount+1;
        }
    }
    cout<<"the number of even numbers in an array are:"<<evenCount<<endl;
    cout<<"the number of odd numbers in an array are:"<<oddCount<<endl;
}