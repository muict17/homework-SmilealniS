#include<stdio.h>

int main()
{
    int arr[]={1, 3, 3, 7, 4, 3, 2, 3, 3};
    int count[9]={0};
    int n;

    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            if(arr[i]==arr[j])
            {
                count[i]++;
            }
        }
    }

    for(int i=0, max=count[0]; i<9; i++)
    {
        if(max<count[i])
        {
            max=count[i];
            n=i;
        }
    }

    printf("The given array is: ");

    for(int i=0; i<9; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("The majority of the Element: %d\n", arr[n]);
    return 0;
}