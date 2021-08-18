#include<stdio.h>
#include<conio.h>
#include<process.h>
#include <stdlib.h>

int a;
char b[20],c;
FILE *f1,*f2;

void Create_Overwrite();
void Append();
void Delete();
void Display();

void TE()
//void main()
{
 do
 {
  printf("\n\n");
  printf("\n\tTEXT EDITOR\n");
  printf("\n\tMENU:");
  printf("\n\t1.CREATE_OR_OVERWRITE\n\t2.DISPLAY\n\t3.APPEND\n\t4.DELETE\n\t5.EXIT\n");
  printf("\n\tEnter your choice:");
  scanf("%d",&a);
  switch(a)
  {
  case 1:
    Create_Overwrite();
    break;
  case 2:
    Display();
    break;
  case 3:
    Append();
    break;
  case 4:
    Delete();
    break;
  case 5:
    exit(0);
  }
  }while(1);
}


void Create_Overwrite()
{   
  printf("\n\tEnter the filename:");
  scanf("%s",b);
  remove(b);
  f1=fopen(b,"w");
  printf("\n\tEnter the text\n");
  while((c=getchar())!=EOF)
  {
  fputc(c,f1);  
  }
  fclose(f1);    
}


void Display()
{
  printf("\n\tEnter the file name:");
  scanf("%s",b);
  f1=fopen(b,"r");
  if(f1==NULL)
  {
  printf("\n\tFile not found");
  fclose(f1);
  }
  while((c=fgetc(f1))!=EOF)
  {
  fputc(c,stdout);
  } 
  fclose(f1);
  
}


void Delete()
{
  printf("\n\tEnter the file name: ");
  scanf("%s",b);
  f1=fopen(b,"r");
  if(f1==NULL)
  {
  printf("\n\tFile not found!");
  fclose(f1);
  }
  if(remove(b)==0)
  {
  printf("\n\n\tFile has been deleted successfully!");
  } 
}


void Append()
{
  printf("\n\tEnter the file name:");
  scanf("%s",b);
  f1=fopen(b,"a");
  if(f1==NULL)
  {
  printf("\n\tFile not found");
  fclose(f1);
  }
  while((c=getchar())!=EOF)
  {
  fputc(c,f1);
  }
  fclose(f1);
}
