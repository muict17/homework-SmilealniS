#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n], b[n];

    for(int i=0; i<n; i++)
    {
        do
        {
            scanf("%d", &arr[i]);
        } while(arr[i]>=n && arr[i]<0);

        b[i]=arr[i];
    }

    int max;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[j]>b[j+1])
            {
                max=b[j];
                b[j]=b[j+1];
                b[j+1]=max;
            }
        }
    }

    printf("The given array is:\n");

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    for(int i=n-1; i>=0; i--)
    {
        if(b[i]==b[i-1])
        {
            printf("\n");
            printf("The maximum repeating number is: %d\n", b[i]);

            return 0;
        }
    }
}