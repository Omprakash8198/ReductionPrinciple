//reducing strncmp method to strcmp
#include<stdio.h>
int strncmp(char*,char*);
int main(){
char *x="helLoWorld";
char *y="helloWorld";

int r=strncmp(x,y);

if(r<0){
    printf("x is smaller than y by %d",r);}
    else if(r>0){
        printf("x is greater than y by %d",r);}
        else
            printf("x is equal to y ",r);

return 0;
    }



int strncmp(char *x,char*y){
    int n;
printf("enter the no of characters to compare");
scanf("%d",&n);
int i=0;

while(i<n)
//while(*x)............used in strcmp method
{
     if(*x!=*y)
        break;
if(i!=n-1){
    x++;
    y++;
}
    i++;

}

return *(unsigned char*)(x)-*(unsigned char*)(y);
}
