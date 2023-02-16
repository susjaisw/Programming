#include<stdio.h>
#include<stdlib.h>
int Linear_Search(int [],int,int);

int main()
{
int size,key;
printf("enter the size of array :\n");
scanf("%d",&size);

int *pArray=(int*)malloc(size*sizeof(int));
if(pArray==NULL)
{
    printf("out of memory\n");
    return 0;
}
printf("enter the element of array :\n");
for(int i=0;i<size;i++)
scanf("%d", pArray+i);
printf("enter the element to be searched :\n");
scanf("%d", &key);
int Result= Linear_Search(pArray,size,key);
if(Result==-1)
printf("Element not found\n");
else printf("Element found at index %d : ", Result);
    free(pArray);
    pArray=NULL;
return 0;

}

int Linear_Search(int *array,int size,int key)
{

for(int index=0;index<size;index++)
{
    if(*(array+index)==key)
     return index;
}
return -1;
}
