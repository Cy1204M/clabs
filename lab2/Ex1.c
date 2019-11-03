# include<stdio.h>
int bitcount(unsigned x);
int main (void)
{
    unsigned int m =1;
    while(m>0)
    {
        m++;
    }
    printf("max: %u\n",m-1);
    printf("size  : %d\n :",bitcount(1));
    return 0;
}
    int bitcount (unsigned x)
    {
        int b;
        for (b=0;x !=0;x <<=1)
        b++;
        return b;
    }
