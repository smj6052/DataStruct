#include <stdio.h>

#define MAX_SIZE 100

float sum(float list[], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    printf("[----- [Minjung Seo] [2020039085] -----]\n");
    
    //input 배열에 값 넣기
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;
    
    //for checking call by reference
    printf("address of in input = %p\n", input);    //input 주소 출력
    
    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);     //합 출력
}
float sum(float list[], int n)
{
    printf("value of list = %p\n",list);    //list의 값 == inputdml 주소
    printf("address of list = %p\n\n",&list);   //list의 주소 출력

    int i;
    float tempsum = 0;
    //합 연산
    for(i = 0; i < n; i++)
        tempsum += list[i];
    //결과값 반환    
    return tempsum;
}