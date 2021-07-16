#include<stdlib.h>
#include<stdio.h>

int main(){
    FILE *file1;//file to be read and copied
    FILE *file2;//copy into this file
    file1=fopen("test.txt","r");
    file2=fopen("file2.txt","w");
    char dataread[50];

    while(fgets(dataread,50,file1))
    fputs(dataread,file2);

    fclose(file1);
    fclose(file2);
    
}