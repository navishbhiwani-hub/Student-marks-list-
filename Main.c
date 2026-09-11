#include <stdio.h>

int main()
{
    int eng,hindi,math,total;

    printf("Enter English Marks: ");
    scanf("%d",&eng);

    printf("Enter Hindi Marks: ");
    scanf("%d",&hindi);

    printf("Enter Math Marks: ");
    scanf("%d",&math);

    total = eng + hindi + math;

    printf("Total Marks = %d", total);

    return 0;
}
