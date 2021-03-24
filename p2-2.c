#include <stdio.h>

void print1 (int *ptr, int rows);

int main(){
    printf("[----- [Minjung Seo] [2020039085] -----]\n");

    int one[] = {0, 1, 2, 3, 4};

    printf("one \t\t= %p\n", one);            //one의 주소 (배열에서 이름은 주소)
    printf("&one \t\t= %p\n", &one);          //one의 주소
    printf("&one[0] \t= %p\n", &one[0]);    //one의 주소
    printf("\n");

    print1(&one[0], 5);
    
    return 0;
}

void print1 (int *ptr, int rows){
    /* print out a one-dimensional array using a pointer */
    
    int i;
    printf ("Address Contents\n");
    for (i = 0; i < rows; i++)
        //ptr+i==ptr[i](주소), ptr+i==ptr[i](주소)가 가리키는 값 출력
        printf("%p \t  %5d\n", ptr + i, *(ptr + i));    
    printf("\n");
}
