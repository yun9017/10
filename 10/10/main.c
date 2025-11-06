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
    int i;
    
    //fopen
    fp = fopen("sample.txt","w");
    
    for(i=0;i<3;i++)
    {
        //fprintf
        printf("input a word:");
        scanf("%s", input); //문자 여러개 배열에 저장, &쓰지 않고 배열 이름 그대로
        fprintf(fp,"%s\n",input);
    }
    //fclose
    fclose(fp);
    
    return 0;
    
    }

