//reduction of strcpy method to strncpy
char* strncpy(char*,char*);

int main(){
char x[10]="hello";
char y[10]="";

char* r=strncpy(x,y);
printf("%s",r);
return 0;
}

char* strncpy(char* x,char *y){
int i;int n;
printf("enter the no of characters you want to copy");
scanf("%d",&n);
for(i=0;i<n;i++){
   y[i]=x[i];
}

return y;
}
