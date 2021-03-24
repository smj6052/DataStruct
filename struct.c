#include <stdio.h>

//struct 선언
struct student1{
    char lastName;
    int studentId;
    char grade;
};
typedef struct{
    char lastName;
    int studentId;
    char grade;
}student2;

int main(){
    printf("[----- [Minjung Seo] [2020039085] -----]\n");

    struct student1 st1={'A',100,'A'};

    printf("st1.lastName = %c\n",st1.lastName);
    printf("st1.studentId = %d\n",st1.studentId);
    printf("st1.grade = %c\n",st1.grade);

    student2 st2={'B',200,'B'};

    printf("\nst2.lastName = %c\n",st2.lastName);
    printf("st2.studentId = %d\n",st2.studentId);
    printf("st2.grade = %c\n",st2.grade);

    student2 st3;

    st3=st2;    //st2 값을 st3에 저장

    printf("\nst3.lastName = %c\n",st3.lastName);
    printf("st3.studentId = %d\n",st3.studentId);
    printf("st3.grade = %c\n",st3.grade);

    /*equality test     //[==]사용 X >> 하나하나 비교
    if (strcmp(person1.name, person2.name))
    return FALSE;
    if (person1.age != person2.age)
    return FALSE;
    if (person1.salary != person2.salary)
    return FALSE;*/

    return 0;
}