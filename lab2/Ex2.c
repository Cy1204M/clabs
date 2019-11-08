#include <stdio.h>
int BITMAX(unsigned x);
int main(void)
{
    char Y[6];
    int k = 0;
    int m = 0;
    while (k<7)
    {
        Y[k] = getchar();
        if(Y[k] == '\n')
        {
            break;
        }
        m = m * 10 + (Y[k] - '0');
        k++ ;
    }
    printf("\1的个数%d\n", BITMAX(m));
    return 0;
}
int BITMAX( unsigned x )
{
    int b;
    for(b =0;x !=0; x >>=1)
    {
        if (x & 01)
        {
            b++;
        }
    }
    return b ;
}
