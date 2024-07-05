//Write a program to read data from file.

 #include<stdio.h>
#include<string.h>  
int main()
{
    FILE *fp;
    char string[50];
    fp=fopen("C:\\Users\\Admin\\Desktop\\KIRAN_ASG_SE\\sonu.txt","r");
    if(fp==NULL)
    {
        printf("file not found");
    }
    else
    {
        printf("file created");
        while(fgets(string,50,fp)!=NULL)
        {
           printf("\n %s",string);
        }
        fseek(fp,0,SEEK_END);
        printf("\n %d",ftell(fp));
        rewind(fp);
        fclose(fp);
    }
}  