/*
3. Create an array of given integers. Divide the array into two halves and perform 
	a. Bubble sort in one half
	b. Selection sort in the second half and
	c. Merge sort the two halves
*/

#include<stdio.h>

void swap(int * num1, int * num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}

void bubbleSort(int arr[], int l, int h)
{
    for (int i = l; i < h; i++)
    {
        for (int j = i+1; j < h; j++)
        {
            if (arr[j] > arr[i])
            {
                swap(&arr[j], &arr[i]);
            }            
        }        
    }    
}

void selectionSort(int arr[], int l, int h)
{
    int i, j, min_idx;
    for ( i = 0; i < h; i++)
    {
        min_idx = i;
        for ( j = i+1; j < h; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
            if (min_idx != i)
            {
                swap(&arr[min_idx], &arr[i]);
            }            
        }        
    }    
}

void mergeSort(int arr[], int l, int m, int h)
{
    int s1 = l;
    int s2 = m+1;
    int temp_arr[h];

    int c = 0;

    while ((s1 <= m) && (s2 <= h))
    {
        if (arr[s1] < arr[s2])
        {
            temp_arr[c] = arr[s1];
            s1++;
        }
        else
        {
            temp_arr[c] = arr[s2];
            s2++;
        }
        c++;
    }
    while (s1 <= m)
    {
        temp_arr[c] = arr[s1];
        s1++;
        c++;
    }
    while (s2 <= h)
    {
        temp_arr[c] = arr[s2];
        s2++;
        c++;
    }
    
    for (int i = 0; i < h; i++)
    {
        arr[i] = temp_arr[i];
    }

}

void display(int arr[], int h)
{
    for (int i = 0; i < h; i++)
    {
        printf("%d, ", arr[i]);
    }    
    printf("\n");
}


int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }

    int l = 0;
    int mid;

    if (n % 2 == 0)
    {
        mid = (n / 2) + 1;
    }
    else
    {
        mid = (n-1)/2;
    }
    
    display(arr, n);
    bubbleSort(arr, l, mid);
    display(arr, n);
    selectionSort(arr, mid+1, n);
    display(arr, n);
    mergeSort(arr, l, mid, n);
    display(arr, n);
    
    return 0;
}
