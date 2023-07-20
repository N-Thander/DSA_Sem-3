// Write a c program to print the frequency of a given array

#include <stdio.h>

int main(void)
{
    int arr[10];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        int flag = 0;
        for (int k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            int element = arr[i];
            int count = 0;
            for (int j = 0; j < 10; j++)
            {
                if (element == arr[j])
                {
                    count++;
                }
            }
            printf("The element %d occurs %d number of times\n", arr[i], count);
        }
    }

    return 0;
}
