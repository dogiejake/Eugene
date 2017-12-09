#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int D (int a, int bs, int s)
{
        return bs-4*a*s;
};
int answere1 (int firstk, int secondk, int diskr)
{
        return (secondk-sqrt(diskr))/(2*firstk);
};
int answere2 (int firstk,int secondk, int diskr)
{
        return (secondk+sqrt(diskr))/(2*firstk);
};
int main()
{
        int x1,x2,bs,b,a,s,discrim;
        scanf ("%d %d %d", &a, &b, &s);
        bs=pow(b,2);
        discrim=D(bs,a,s);
        if (discrim<0)
{
        printf("Yourn equation hasn't answeres");
}
        else
{
        x1=answere1(bs,b,a);
        x2=answere2(bs,b,a);
        printf("%d\n%d\n", x1, x2);
        return 0;
}
}
