// programe 1
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Input elements of first array
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Copy first array into merged array
    for(i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array into merged array
    for(i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    // Display merged array
    printf("Merged Array: ");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}

// programe 2

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], unionArr[200];
    int n1, n2, i, j, k = 0, found;

    // Input size and elements of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
        unionArr[k++] = arr1[i]; // Add elements to union array
    }

    // Input size and elements of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Add only unique elements from second array
    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < k; j++)
        {
            if(arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            unionArr[k++] = arr2[i];
        }
    }

    // Display union array
    printf("Union of arrays: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
// programe 3

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int n1, n2, i, j;

    // Input size and elements of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Find and print common elements
    printf("Intersection of arrays: ");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}

// programe 4 

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int n1, n2, i, j;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Input elements of first array
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Find common elements
    printf("Common elements are: ");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}