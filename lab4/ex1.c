#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
#define BUFSIZE 100

int getop(char [ ]);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
void a(void)

int sp = 0;
double val[MAXVAL];
char buf[BUFSIZE];
int bufp = 0;

main ()
{
    int type;
    double op1,op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
        case NUMBER:
                 push(atof(s));
                 break;
        case '+':
                 push(pop() + pop());
                 break;
        case '-':
                 op2 = pop();
                 push(pop() - op2);
                 break;
        case '*':
                 push(pop() * pop());
                 break;
        case '/';
                 op2 = pop();
                 if (op2 != 0.0)
                     push(pop() / op2);
                else
                        printf("error: zero divisor\n");
                break;
        case '%':
                 op2 = pop();
                 if  (op2 != 0)
                 {
                       push((int)pop() % (int)op2);
                 }
                 else
                 {
                     printf("error: zero divisor\n");
                 }
                 break;
                 case 'q' :/*print the top element of the stack*/
                 op1 = pop();
                 printf("\t%.8g\n",op1);
                 push(op1);
                 break;
                 case 'w' :/*copy the top element of the stack*/
                 op1 = pop();
                 push(op1);
                 push(op1);
                 break;
                 case 'e' :/*swap the values of the two elements at the top of the stack*/
                 op1 = pop();
                 op2 = pop();
                 push(op1);
                 push(op2);
                 break;
                 case 'r' :/*empty stack*/
                 j();
                 break;
        case '\n' :
                 printf("\t%,8g\n", pop());
                 break;
        default:
                 printf("error : unknown command %s\n", s);
                 break;
        }
    }
    return 0;
}

void j(void){
         sp = 0;
}

void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
            printf("error: stack full, can't push %g\n", f);
}

double pop(void)
{
    if (sp > 0)
         return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
             ;
    s[1] = '\0';
    if (lisdigit(c) && c != '.')
        return c;
    i = 0;
    if  (isdigit(c))
          while (isdigit(s[++i] = c = getch()))
             ;
    if (c == '.')
         while (isdigit(s[++i] = c = getch()))
             ;
    s[i] = '\0';
    if (c != EOF )
         ungetch(c);
    return NUMBER;
}

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
         printf("ungetch: too many characters\n");
    else
            buf[bufp++] = c;
}
