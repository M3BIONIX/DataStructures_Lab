#include<stdio.h>
void readarr(int arr[], int n);
void BubbleSort(int arr[], int n);
void swap(int* h,int* l);
void printarr(int arr[], int n);
void main()
{
  int size,array[100];
  printf("Enter the Size of the Array : ");
  scanf("%d",&size);
  readarr(array,size);
  BubbleSort(array, size);
  printarr(array, size);
}

void readarr(int arr[], int n)
{   printf("Enter the Elements of the Array : ");
    for(int i=0; i<n; i++)
     scanf("%d",&arr[i]);
}

void BubbleSort(int arr[], int n)
{
    for(int i =0; i< n - 1; i++)
     {
         for(int j = i+1; j<n; j++)
          {
              if( arr[j] < arr[i])
               {
                   swap(&arr[i],&arr[j]);
               }
          }
     }
}

void swap( int* h, int* l)
{
    int temp = *h;
    *h = *l;
    *l = temp;
}

void printarr(int arr[], int n)
{   printf("The Sorted Array is : ");
    for(int j =0; j<n; j++)
     printf("%d ",arr[j]);
}
