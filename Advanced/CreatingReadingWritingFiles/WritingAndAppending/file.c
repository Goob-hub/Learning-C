#include <stdio.h>

int main() {
    
    //FILE *pFile = fopen("test.txt", "w"); //The w will let the function know we want to replace the file with other content

    //FILE *pFile = fopen("C:\\Users\\soliz\\Desktop\\test.txt", "a"); //Will create the file at file path
    
    FILE *pFile = fopen("test.txt", "a"); //The a will let the function know we want to append to the file
    
    fprintf(pFile, "\nSpongebob Squarepants"); //Will replace or append text depending on above setting

    fclose(pFile);

    // remove() will delete specified file, will return 1 or 0 like main function
    if(remove("test.txt") == 0) {
        printf("File deleted successfully!");
    } else {
        printf("Failed to delete file!");
    }
    
    return 0;
}