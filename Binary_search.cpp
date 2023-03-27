#include<stdio.h>

int Binary_Search(int [],int,int); // prototype of Binary search method
int main()
{
int n ,k;
int a[100];
printf("Enter the size of array: \n");
scanf("%d",&n);

printf("Enter the element of array: \n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);

printf("Enter the element to be searched: \n");
scanf("%d",&k);


int Result= Binary_Search(a,n,k);
if(Result==-1)
printf("element not found\n");
else printf("element found at index : %d\n",Result);
return 0;

}

int Binary_Search(int array[],int n,int k)
{
    int low=0 , high=n-1 , mid=0;

    while(low<=high)
    {
    mid=(low+high)/2;

    if(array[mid]==k)
    return mid;

    if(array[mid]<k)
    low=mid+1;

    else high=mid-1;
    }
    return -1;
}
