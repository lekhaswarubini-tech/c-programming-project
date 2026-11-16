#include<stdio.h>
int main()
{
FILE*fp;
char ch;
fp=fopen("data.txt","w");
if(fp == NULL)
{
printf("error");
}
fprintf(fp,"c was developed by dennis ritchie,c is a structured program,c uses function,c is widely used,c is easy to learn");
fclose(fp);
fp = NULL;
fp=fopen("data.txt","r");
if(fp==NULL)
{
printf("error");
}
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
fp=NULL;
fp=fopen("data.txt","a");
if(fp==NULL)
{
printf("error");
}
fprintf(fp,"c programming is easy to understand, very clear explanation is given by our trainer,very supprotive trainer,c-lab is always been interactive,excellent teaching");
fclose(fp);
fp=NULL;
return 0;
}




















































































