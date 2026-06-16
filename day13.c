// programe 1 

#include <stdio.h>

int main() {
    int arr[100], n, i;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0; // Indicate successful program execution
}
// programe 2

// WAP to find Sum and Average of Array Elements
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0;
    float average;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of array elements
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Display results
    printf("Sum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", average);

    return 0;
}
// programe 3
// WAP to find the Largest and Smallest Element in an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, smallest;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is both largest and smallest
    largest = arr[0];
    smallest = arr[0];

    // Find largest and smallest elements
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }

        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    // Display the results
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
// programe 4
// WAP to Count Even and Odd Elements in an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int evenCount = 0, oddCount = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count even and odd elements
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenCount++;   // Increment even counter
        }
        else
        {
            oddCount++;    // Increment odd counter
        }
    }

    // Display the results
    printf("Number of Even elements = %d\n", evenCount);
    printf("Number of Odd elements = %d\n", oddCount);

    return 0;
}