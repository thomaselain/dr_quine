#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
int n=9;
if(n<=0){return(0);}char*s="#include<stdio.h>%c#include<string.h>%c#include<stdlib.h>%cint main(void){%cint n=%d;%cif(n<=0){return(0);}char*s=%c%s%c;char file[34];sprintf(file,%cSully_%cd.c%c,n-1);FILE *f=fopen(file,%cwb+%c);fprintf(f,s,10,10,10,10,n-1,10,34,s,34,34,37,34,34,34,34);return(0);}";char file[34];sprintf(file,"Sully_%d.c",n-1);FILE *f=fopen(file,"wb+");fprintf(f,s,10,10,10,10,n-1,10,34,s,34,34,37,34,34,34,34);return(0);}