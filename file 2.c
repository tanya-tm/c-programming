#include<stdio.h>
#include<conio.h>
main()
{
   FILE* fp1,fp2;
   char ch;
   fp1=fopen("input.txt","r");
   fp2=fopen("output.txt","w");
   if(fp1==NULL||fp2==NULL)
   {
     printf("could not open file ");
   }
   while( (ch=fgetc(fp1))!=EOF)
   {
       fputc(ch,fp2);
   }
   printf("copied");
   fclose(fp1,fp2);
   getch();
   return 0;
}

    
