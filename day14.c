// WAP to perform Linear Search in an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int found = 0; // Flag variable

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform linear search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    // If element is not found
    if(found == 0)
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}
// programe 2

// WAP to find the Frequency of an Element in an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int frequency = 0;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the element whose frequency is to be found
    printf("Enter the element to find frequency: ");
    scanf("%d", &key);

    // Count frequency of the element
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            frequency++;
        }
    }

    // Display the result
    printf("Frequency of %d = %d\n", key, frequency);

    return 0;
}
// programe 3

// WAP to find the Second Largest Element in an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, secondLargest;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first two elements as largest and second largest
    if(arr[0] > arr[1])
    {
        largest = arr[0];
        secondLargest = arr[1];
    }
    else
    {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Find largest and second largest elements
    for(i = 2; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    // Display the result
    printf("Second Largest Element = %d\n", secondLargest);

    return 0;
}
// programe 4

// WAP to Find Duplicate Elements in an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int found = 0;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find duplicate elements
    printf("Duplicate elements are: ");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                found = 1;
                break; // Avoid printing the same duplicate multiple times
            }
        }
    }

    // If no duplicates are found
    if(found == 0)
    {
        printf("No duplicate elements found.");
    }

    printf("\n");

    return 0;
}