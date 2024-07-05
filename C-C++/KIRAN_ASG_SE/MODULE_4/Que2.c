//Write a program to read and write data from the file.
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp = fopen("C:\\Users\\Admin\\Desktop\\KIRAN_ASG_SE\\sonu.txt","w");
    fprintf(fp,"READING AND WRITING IN THE SAME PROGAM.");
    fclose(fp);
    char arr[50];
    fp= fopen("C:\\Users\\Admin\\Desktop\\KIRAN_ASG_SE\\sonu.txt","r");
    while(fscanf(fp," %s ",arr)!=EOF)
    {
        printf(" %s ",arr);
    }
    fclose(fp);
}