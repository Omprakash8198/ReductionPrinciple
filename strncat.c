//used length function and strcpy
char* strncat(char*,char*);

int main(){
char x[10]="hello";
char y[10]="world";

char* r=strncat(x,y);
printf("%s",r);
return 0;
}

char* strncat(char* x,char *y){
int i,j,n;int r;
printf("enter the no of characters you want to copy");
scanf("%d",&n);

for(i=0;x[i]!='\0';i++);//...........length function.
for(j=0;j<n;i++,j++){//.....strcpy function
   x[i]=y[j];
}
return x;


}



