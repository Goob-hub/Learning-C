#include <stdio.h>

int main() {
    
    FILE *pFile = fopen("C:\\Users\\soliz\\Desktop\\TheList.txt", "r"); //The r lets the function know we wanna read data from it

    char buffer[255]; //Temp storage space for reading from the file.

    if(pFile == NULL) {
        printf("File does not exist?");
    } else {
        //fgets() will read a file by a single line and return that line or null if the end of the file is reached
        while(fgets(buffer, 255, pFile) != NULL) {
            printf("%s", buffer);
        }
    }
    
    return 0;
}