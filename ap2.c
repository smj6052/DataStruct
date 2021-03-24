#include<stdio.h>
#include<stdlib.h>

void main(){

    printf("[----- [Minjung Seo] [2020039085] -----]\n");

    //선언 및 초기화
    int list[5];
    int *plist[5];

    list[0]=10;
    list[1]=11;

    //동적 메모리 할당 : heap를 사용하여 4bytes만큼의 공간에 대한 주소값을 plist[0]에 저장
    plist[0]=(int *)malloc(sizeof(int));

    printf("list[0] \t\t= %d\n",list[0]);               //list[0]의 값 == 10
    printf("address of list \t= %p\n",list);            //list의 주소 (배열에서 이름은 주소)
    printf("address of list[0] \t= %p\n",&list[0]);     //list[0]의 주소
    printf("address of list + 0 \t= %p\n",list+0);      //list+0 == list[0]의 주소
    printf("address of list + 1 \t= %p\n",list+1);      //list+1(4bytes) == list[1]의 주소
    printf("address of list + 2 \t= %p\n",list+2);      //list+2(4bytes*2) == list[2]의 주소
    printf("address of list + 3 \t= %p\n",list+3);      //list+3(4bytes*3) == list[3]의 주소
    printf("address of list + 4 \t= %p\n",list+4);      //list+4(4bytes*4) == list[4]의 주소
    printf("address of list[4] \t= %p\n",&list[4]);     ////list[4]의 주소

    //동적할당 되었던 메모리 반환
    free(plist[0]);

}