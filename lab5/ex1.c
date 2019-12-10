#include<stdio.h>

void reverse (char arry[]);
void swap (char arry[], int q, int w);
int w = 0;
int main(void){
       char arry[100];
       while(arry[w] != EOF){
           arry[w] = getchar();
           if(arry[w] == '\n'){
                   break;
           }
           w++;
       }
       reverse(arry);
       printf("%s", arry);
}

void reverse(char arry[]){
swap(arry, 0, w);
}

void swap(char arry[], int q, int w){
    int e, r;
    r = w - (q + 1);
    if (q < r){
        e = arry[q];
        arry[q] = arry[r];
        arry[r]= e;
        swap (arry, ++q, w);
    }
}
