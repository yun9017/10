//
//  main.c
//  10
//
//  Created by 한서윤 on 11/6/25.
//

#include <stdio.h>
#include <string.h>

void main(void) {
    char src[] = "The worst things to eat before you sleep";
    char dst[100];
    
    strcpy(dst, src);
    printf("copied string:%s\n",dst);
    }

