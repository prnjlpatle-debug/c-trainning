#include<stdio.h>
 int BSearch()
    {
    int arr[6]={1,2,3,4,5,6};
    int target =11;
    int s=0;
    int end=5;


    int mid;
    while(s<=end)
    {
        int mid=(s+end)/2;
        if(arr[mid]==target)
        {
            break;
        }
    
   else if(arr[mid]<target)
   {
   s=mid+1;
    }
    else 
    {
     end=mid-1;
    }
    }
    printf("%d",mid);
    
}

