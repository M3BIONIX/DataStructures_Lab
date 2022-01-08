#include<stdio.h>
void readarr();
void SelSort();
void swap(int* h,int* l);
void printarr();
int size,arr[100];
void main()
{
  
  printf("Enter the Size of the Array : ");
  scanf("%d",&size);
  readarr();
  SelSort();
  printarr();
}

void readarr()
{   printf("Enter the Elements of the Array : ");
    for(int i=0; i<size; i++)
     scanf("%d",&arr[i]);
}

void SelSort()
{
    int index;
    for(int i =0; i<size-1;i++)
    {  index = i;
       for(int j = i+1;j<=size-1-i;j++)
        {  
           if(arr[j] < arr[i])
           {
               index = j;
               swap(&arr[i],&arr[index]);
           }
        }
    }
}

void swap(int* h,int* l)
{
   int temp = *h;
    *h = *l;
    *l = temp;
}

void printarr()
{   printf("The Sorted Array is : ");
    for(int j =0; j<size; j++)
     printf("%d ",arr[j]);
}

