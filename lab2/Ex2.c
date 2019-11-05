#include<stdio.h>
int bitcount(unsigned x)
int main(viod)
{
        int a,b,c,d,e;
    a=getcgar();
    b=getchar();
    if(b !='\n')
      {
          c=getchar();
           if (c !='\n')
           {
               d=getchar ();
               if(d !='\n')
               {
                   e=getchar();
                   if(e !='\n')
                   {
                       getchar();
                   }
               }
           }
      }
      int n;
      if (b =='\n')
      {
       n = a -'0';
      }
      else if (b !='\n'&&c =='\n')
      {
        b=b-'0'
       n=(a-'0')*10+(b-'0');
      }
      else if (c !='n'&&d =='\n')
      {
          c=c-'0'
         n =(a-'0')*100+(b-'0')*10+(c-'0');
      }
      else  if (d !='\n'&&e == '\n')
       {
          d=d-'0'
        n=(a-'0')*1000+(b-'0')*100+(c-'0')*10+(d-'0');
       }
       else if (e !='\n')
       {
           e=e-'0'
        n=(a-'0')*10000+(b-'0')*1000+(c-'0')*100+(d-'0')*10+(e-'0');
       }
       printf("%d\n",bitcount(n));
       return 0;
 }
int bitcount(unsigned x)
 {
    int b;
    for(b=0;x !=0;x >>=1)
    {
        if(x & 01)
        {
            b++;
        }
    }
    return b;
 }
