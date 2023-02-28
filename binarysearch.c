#include<stdio.h>
int binarysearch(int arr[], int x, int low, int high) // Function for binarysearch
{
while(high>=low) //to check presence of element in array
{
int mid=low+(high-low)/2; //to find middle element of array

if(arr[mid]==x) //if middle element is the required element
return mid;
if(arr[mid]>x) //if finding element is greater than middle element
return binarysearch(arr,x,low, mid-1); //recursive call
return binarysearch(arr,x,mid+1, high);
}
return -1;
}

void main()
{
int arr[]={1,2,3,4,5,8,9,10};
int n=sizeof(arr)/sizeof(arr[0]);
int x=5;
int result=binarysearch(arr,x,0,n-1);
if(result==-1) //to check whether search element is found
printf("Not found");
else
printf("Found at:%d",result);
}
