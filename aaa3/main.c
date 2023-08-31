#include <stdio.h>
#include <stdlib.h>

enum DAY  { PON, WT, SR, CZW, PT, SO, ND};

void printdays(enum DAY arg1, int n)
{
    if(n>0)
    {
        if (arg1 == PON)
        {
            printf("PON\n");
        }
        else if (arg1 == WT)
        {
            printf("WT\n");
        }
        else if (arg1 == SR)
        {
            printf("SR\n");
        }
        else if (arg1 == CZW)
        {
            printf("CZW\n");
        }
        else if (arg1 == PT)
        {
            printf("PT\n");
        }
        else if (arg1 == SO)
        {
            printf("SO\n");
        }
        else if (arg1 == ND)
        {
            printf("ND\n");
        }

        n--;
        arg1++;
        if(arg1 >6)
        {
            arg1 -=7;
        }
        printdays(arg1, n);
    }
}

int main()
{
    printdays(PON, 10);
    return 0;
}
