#include<stdio.h>
void main ()
{
    int size, pos,student;
    printf("enter size: ");
    scanf("%d",&size);
    int arr[size];
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("values in array before inseration: ");
    
    for (int i = 0; i <size; i++)
     {
        printf("%d ",arr[i]);
     }
    int value;
    printf("\nenter value : ");
    scanf("%D",&value);
    printf("\nenter position: ");
    scanf("%D",&pos);

     
     for (int i = size-1; i >=pos-1; i--)
     {
         arr[i+1]=arr[i];
         if (i == pos-1)
         {
            arr[pos-1] = value;
         }
         
     }
     printf("values in array after inseration: ");
     for(int i = 0; i<=size; i++)
     {
        printf("%d ",arr[i]);
     }
    
     
     


}