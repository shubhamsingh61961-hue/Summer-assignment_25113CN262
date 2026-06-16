// WAP to Find the Missing Number in an Array

// Array contains numbers from 1 to n with one number missing

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int totalSum = 0, arraySum = 0, missingNumber;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Input n-1 elements
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        arraySum += arr[i];
    }

    // Calculate sum of numbers from 1 to n
    totalSum = n * (n + 1) / 2;

    // Find the missing number
    missingNumber = totalSum - arraySum;

    // Display result
    printf("Missing Number = %d\n", missingNumber);

    return 0;
}

// programe 2

// WAP to Find the Element with Maximum Frequency in an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int maxFreq = 0, maxElement;
    int freq;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find frequency of each element
    for(i = 0; i < n; i++)
    {
        freq = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                freq++;
            }
        }

        // Update maximum frequency and element
        if(freq > maxFreq)
        {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }

    // Display result
    printf("Element with Maximum Frequency = %d\n", maxElement);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}
// programe 3

// WAP to Find Pair with a Given Sum in an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, sum;
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

    // Input the required sum
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    // Find all pairs with the given sum
    printf("Pairs with sum %d are:\n", sum);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    // If no pair is found
    if(found == 0)
    {
        printf("No pair found.\n");
    }

    return 0;
}
// programe 4

// WAP to Remove Duplicate Elements from an Array

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, k;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                // Shift elements to the left
                for(k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--; // Reduce array size
                j--; // Check current position again
            }
        }
    }

    // Display array after removing duplicates
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}