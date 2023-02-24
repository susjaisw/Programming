#include<iostream>
using namespace std;

void SelectionSort(int [],int);
void swap(int *,int *);

int main()
{
int n;
cout<<"Enter the Array size : \n";
cin>>n;
int *array=new int[n];
cout<<"Enter the element in array : \n";
for(int i=0;i<n;i++)
cin>>array[i];
cout<<"Array element before sorting : \n";
for(int i=0;i<n;i++)
cout<<array[i]<<" ";
SelectionSort(array,n);
cout<<"\nArray element after sorting : \n";
for(int i=0;i<n;i++)
cout<<array[i]<<" ";
delete array;
return 0;
}

void SelectionSort(int a[],int n)
{
int min;
  for(int i=0;i<n-1;i++ )
 { 
   min=i;
   for(int j=i+1;j<n;j++)
   {
     if(a[j] < a[min])
     min=j;   
   }
swap(&a[i],&a[min]);
 }
}

void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}