#include<stdio.h>
#include<conio.h>
int main()
{
    int number[50],search,n,c;
    printf("Enter the elements are:  \n");
    scanf("%d",&n);
    printf("The %d elements are: \n",n);
    for(c=0;c<n;c++)
    {
    scanf("%d",&number[c]);
    }
    printf("\n");
    printf("The selected numbers are:\n");
    scanf("%d",&search);
    printf("\n");
    for(c=0;c<n;c++)
    {
        if(number[c]==search)
        {
            printf("The %d elements are present in %d position.\n",search,c+1);
        break;
        }
    }
    printf("\n");
    if(c==n)
    {
        printf("The %d element is not present in the list.\n",search);
    }
    return 0;
}
