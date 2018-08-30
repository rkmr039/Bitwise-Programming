// decimal to binary conversion using bit wise operator
// also calculates the minimum number of bit required to represent the decimal number in binary form

#include <stdio.h>
#include <stdlib.h>

int count_bits(int num)
{
    int temp = 0;
	while(1)
        {
            if((1<<temp) < num) temp++; else break;
        }
        //printf("Count : %d\n",temp-1);
        return (temp-1);
}


int main()
{
    int *bin,i=0;
    int num,count;
    printf("\nEnter the decimal number: ");
    scanf("%d",&num);
    count = count_bits(num);
    bin = (int*)malloc(sizeof(int)*count);
    while(num > 0)
    {
        bin[i] = num%2;i++;
        num = num/2;
    }
    printf("\nBinary Equivalent : ");
    for(i=count;i>=0; i--) printf("%d ",bin[i]);

	return 0;
}
