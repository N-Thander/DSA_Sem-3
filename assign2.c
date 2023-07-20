// Write a c program to delete duplicate elements

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }

    int j, k, l;

    for (j = 0; j < n; j++)
    {
        for (k = j+1; k < n; k++)
        {
            if (arr[j] == arr[k])
            {
                for (l = j; l < n; l++)
                {
                    arr[l] = arr[l+1];
                }
                n--;
                l--;                
            }            
        }        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    
    return 0;
}
