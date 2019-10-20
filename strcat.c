//used length function and copy function
char* strcat(char*,char*);

int main(){
char x[10]="hello";
char y[10]="world";

char* r=strcat(x,y);
printf("%s",r);
return 0;
}

char* strcat(char* x,char *y){
int i,j;int r;

for(i=0;x[i]!='\0';i++);//...........length function.
for(j=0;(x[i]=y[j])!='\0';i++,j++);//.....strcpy function

return x;
}

