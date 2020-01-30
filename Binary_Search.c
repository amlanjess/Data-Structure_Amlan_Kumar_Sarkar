#include<stdio.h>
#include<conio.h>
int main()
{
    int c,last,middle,n,f,search;
    int number[10];
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("The %d elements are:\n");
    for(c=0;c<n;c++)
    {
    scanf("%d",&number[c]);
    }
    printf("\n");
    f=0;
    last=n-1;
    middle=(f+last)/2;
    while(f<=last)
    {
        if(number[middle]<search)
            f=middle+1;
        else if(number[middle]==search)
        {
            printf("%d is available on %d position.\n",search,c);
        break;
    }
    else
        last=middle-1;
    middle=(f+last)/2;
}
if(f>last)
{
    printf("Not found.%d is not present in there.\n",search);
    return 0;
}
}
