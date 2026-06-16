// programe 1

// WAP to Reverse an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i, temp;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reverse the array using swapping
    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Display reversed array
    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
// programe 2

// WAP to Rotate an Array Left by One Position

#include <stdio.h>

int main()
{
    int arr[100], n, i, first;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Store the first element
    first = arr[0];

    // Shift all elements one position to the left
    for(i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Place the first element at the last position
    arr[n - 1] = first;

    // Display the rotated array
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
// programe 3
// WAP to Rotate an Array Right by One Position

#include <stdio.h>

int main()
{
    int arr[100], n, i, last;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Store the last element
    last = arr[n - 1];

    // Shift all elements one position to the right
    for(i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the first position
    arr[0] = last;

    // Display the rotated array
    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
// programe 4 
// WAP to Move All Zeros to the End of an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i, j = 0, temp;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the beginning
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    // Display the modified array
    printf("Array after moving zeros to the end:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}