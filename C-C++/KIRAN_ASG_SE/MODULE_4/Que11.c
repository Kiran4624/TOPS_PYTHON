
//create a file

#include<stdio.h>
#include<string.h>

int main() {
    FILE *fp;
    char string[50];

   
    fp = fopen("C:\\Users\\Admin\\Desktop\\KIRAN_ASG_SE\\sonu.txt", "w");

    if(fp == NULL) {
        printf("File not found or could not be created\n");
    }
    else {
        printf("File created\n");

        printf("Enter data to write to the file (Press Enter on an empty line to stop):\n");

        
        while (fgets(string, sizeof(string), stdin) != NULL && string[0] != '\n') {
           
            string[strcspn(string, "\n")] = '\0';
            fputs(string, fp);
            fputs("\n", fp);
        }

        printf("Data added to the file.\n");
    }

    
    fclose(fp);

    return 0;
}
