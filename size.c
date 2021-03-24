#include <stdio.h>
#include <stdlib.h>

void main(){

    printf("[----- [Minjung Seo] [2020039085] -----]\n");
    
    int **x;
    printf("sizeof(x)   = %lu\n",sizeof(x));        //포인터는 주소를 저장함 >> c언어 컴파일시, 컴파일러가 32 bit 일 때, 주소를 저장하는 포인터 변수의 크기는 4bytes
    printf("sizeof(*x)  = %lu\n",sizeof(*x));       //포인터는 주소를 저장함 
    printf("sizeof(**x) = %lu\n",sizeof(**x));      //더블 포인터가 가리키는 값은 int형이기 때문에 4bytes

}