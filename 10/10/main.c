//
//  main.c
//  10
//
//  Created by 한서윤 on 11/6/25.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char input[100];
    FILE* fp;
    char c;
    
    fp = fopen("/Users/hanseoyun/Desktop/programming/programming/10/10/sample.txt","r");
    if(fp == NULL)
    {
        printf("Failed to open file!\n");
        return -1;
    }
#if 0
    while((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }
#else
    while(fgets(input, 100, fp) > 0)
    {
        printf("%s",input);
    }
#endif
    fclose(fp);
    
    return 0;
    
    }

