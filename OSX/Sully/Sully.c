#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
int n=5;
if(n<=0){return(0);}
char*s="#include<stdio.h>%c#include<string.h>%c#include<stdlib.h>%cint main(void){%cint n=%d;%cif(n<=0){return(0);}%cchar*s=%c%s%c;%cchar file[100],name[100],command[100];sprintf(name,%cSully_%cd%c,n-1);sprintf(file,%c%cs.c%c,name);sprintf(command,%cgcc -Wall -Werror -Wextra -o %cs %cs && ./%cs%c,name,file,name);FILE *f=fopen(file,%cw%c);fprintf(f,s,10,10,10,10,n-1,10,10,34,s,34,10,34,37,34,34,37,34,34,37,37,37,34,34,34);fflush(f);system(command);}";
char file[100],name[100],command[100];sprintf(name,"Sully_%d",n-1);sprintf(file,"%s.c",name);sprintf(command,"gcc -Wall -Werror -Wextra -o %s %s && ./%s",name,file,name);FILE *f=fopen(file,"w");fprintf(f,s,10,10,10,10,n-1,10,10,34,s,34,10,34,37,34,34,37,34,34,37,37,37,34,34,34);fflush(f);system(command);}