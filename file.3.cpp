#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  FILE *f1;
 struct city
 {
  int stdcode;
  char cname[20];
 }c1[100];
 int i,n;
 char key[20],last[20];
  f1=fopen("cities.txt","r");
  if(f1==NULL)
  {
     printf("File not found");
     exit(0);
  } 
  i=0;
  while(!feof(f1))
  {
      fscanf(f1,"%s%d",&c1[i].cname,&c1[i].stdcode);
      i++;
  } 
  n=i;
  printf("Enter city name to search");
  scanf("%s",&key);
  strcpy(last,c1[n-1].cname);
  strcpy(c1[n-1].cname,key);
  i=0;
   while(strcmp(c1[i].cname,key)!=0)
     i++;
     if(i<n-1||strcmp(key,last)==0)
       printf("Found std code=%d",c1[i].stdcode);
       else
       printf("Not found");
 fclose(f1);
}
