#include<stdio.h>
int SecondMax(const int *arr,size_t n,int *secondMax);
int main()
{  

   int arr[]={12,34,5,70,46}; 
   size_t n=0;
   int secondMax;
   SecondMax(arr,5,&secondMax);
   return 0;
}
int SecondMax( const int *arr,size_t n,int *secondMax)
{ 
  int count=0,count1=0;
  int max1;
  
   for(int i=0;i<n;i++)
   {
      if(&arr[i]!=NULL)
      {
        count++;
      }
   }
   for(int j=0;j<n-1;j++)
   {
     for(int k=j+1;j<n;k++)
     {
        if(arr[j]==arr[k])
        {
         count1++;
        }
     }
   }
  if(!arr)
  {
     printf("No numbers!\n");
  }
  else if(count==1)
  {
     printf("There is only one number in the array!\n");
  }
  else if(count1>1)
  {
   printf("All numbers are identical!\n");
  }
   
  else if(count>1){
  if(arr[0]>arr[1])
  {
    max1=arr[0];
    *secondMax=arr[1];
    
  }
  else
  {
    max1=arr[1];
  * secondMax=arr[0];
  }
  for(int i=2;i<n;i++)
  {
    if(arr[i]>max1)
    {
      * secondMax=max1;
       max1=arr[i];
    }
    else if(*secondMax<arr[i] && arr[i]<max1)
    {
     *secondMax=arr[i];
    }
   
  }
  printf("Second max:%ls\n",secondMax);
   }
}
  
  
  

