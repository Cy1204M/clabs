# include<stdio.h>
int maxbit(unsigned num);
int main (void)
{
    unsigned int i =1;
    while(i>0)
    {
        ++i;
    }
    printf("MAX number:%u\n",i-1); //输出此时i-1的值，即为无符号整数的最大值
    printf("MAX bit: %d\n:", maxbit(i-1)); //输出该数所占bit
    return 0;
}
    int maxbit (unsigned num)//求数字所占bit位数函数
    {
        int n;
        for (n=0;num !=0;num <<=1)
        n++;
        return n;
    }
