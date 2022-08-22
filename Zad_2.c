#include<stdio.h>
unsigned sumArrayDigits( const int* arr,size_t n);
int main()
{  
  int arr[]={12,34,5,70};
  sumArrayDigits(arr,4);
}

unsigned sumArrayDigits( const int* arr,size_t n)
{  
    int sum=0;
    for(int i=0;i<n;i++)
    {  
    
        sum+=arr[i]/10;
        sum+=arr[i]%10;
     }
     printf("Sum of digits:%d\n",sum);
}
 

