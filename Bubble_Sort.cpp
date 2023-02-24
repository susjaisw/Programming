#include<iostream>
using namespace std;

void BubbleSort(int [],int);
void swap(int *,int *);

int main()
{
int n;
cout<<"Enter the Array size\n";
cin>>n;
int *array=new int[n];
cout<<"Enter the element in array : \n";
for(int i=0;i<n;i++)
cin>>array[i];
cout<<"Array element before sorting : \n";
for(int i=0;i<n;i++)
cout<<array[i]<<" ";
BubbleSort(array,n);
cout<<"\nArray element after sorting : \n";
for(int i=0;i<n;i++)
cout<<array[i]<<" ";
delete array;
return 0;
}

void BubbleSort(int a[],int n)
{
int temp;
bool swapped;
for(int i=0;i<n-1;i++ )
{ 
swapped=false;
for(int j=0;j<n-i-1;j++)
{
if(a[j] > a[j+1])
{
    swap(&a[j],&a[j+1]);
    swapped=true;
}
}
if(swapped==false)
break;
}
}

void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}