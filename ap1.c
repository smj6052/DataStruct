#include<stdio.h>
#include<stdlib.h>

void main(){
    printf("[----- [Minjung Seo] [2020039085] -----]\n");
    
    //선언 및 초기화
    int list[5];
    int *plist[5]={NULL,};

    //동적 메모리 할당 : heap를 사용하여 4bytes만큼의 공간에 대한 주소값을 plist[0]에 저장
    plist[0]=(int *)malloc(sizeof(int));

    list[0]=1;
    list[1]=100;

    *plist[0]=200;

    printf("value of list[0]   == %d\n", list[0]);     //list[0]의 값 == 1
    printf("address of list[0] == %p\n",&list[0]);     //list[0]의 주소
    printf("value of list      == %p\n", list);        //list의 주소 (배열에서 이름은 주소)
    printf("address of &list   == %p\n", &list);       //list의 주소 == list[0]의 주소

    printf("-----------------------------------------\n");
    printf("value of list[1]   == %d\n", list[1]);      //list[1]의 값 == 100
    printf("address of list[1] == %p\n", &list[1]);      //list[1]의 주소     (list[0]의 주소+4bytes(int))
    printf("value of *(list+1) == %d\n", *(list+1));    //list+1(4bytes) == list[1]이 가리키는 값
    printf("address of list+1  == %p\n", list+1);       //list+1(4bytes) == list[1]의 주소

    printf("-----------------------------------------\n");
    printf("value of *plist[0]   == %d\n", *plist[0]);     //*plist[0]의 값 == 200
    printf("&plist[0]            == %p\n", &plist[0]);     //plist[0]의 주소
    printf("&plist               == %p\n", &plist);        //plist의 주소 == plist[0]의 주소
    printf("plist                == %p\n", plist);         //plist의 주소 (배열에서 이름은 주소)
    printf("plist[0]             == %p\n", plist[0]);      //plist[0]에 저장된 주소 >>동적할당 해서 저장했던 200의 주소
    printf("plist[1]             == %p\n", plist[1]);      //plist[1] == null >> 초기화 했던 값
    printf("plist[2]             == %p\n", plist[2]);      //plist[2] == null >> 초기화 했던 값
    printf("plist[3]             == %p\n", plist[3]);      //plist[3] == null >> 초기화 했던 값
    printf("plist[4]             == %p\n", plist[4]);      //plist[4] == null >> 초기화 했던 값

    //동적할당 되었던 메모리 반환
    free(plist[0]);

}