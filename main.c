#include <stdio.h>
#include <stdlib.h>

int main()
{

    double admission,course_work_score,writtenexamination_score,total_score,percentage_score;
    char firstname,secondname,lastname,pass_or_fail;

    printf("=================\n");
    printf("STUDENT'S DETAILS\n");
    printf("=================\n");
    printf("FIRST NAME:");
    scanf("%s",&firstname);
    printf("SECOND NAME:");
    scanf("%s",&secondname);
    printf("LAST NAME:");
    scanf("%s",&lastname);
    printf("ADMISSION NO:");
    scanf("%lf",&admission);
    printf("=================\n");
    printf("STUDENT'S SCORES\n");
    printf("=================\n");
    printf("COURSEWORK:");
    scanf("%lf",&course_work_score);
    printf("WRITTEN EXAM:");
    scanf("%lf",&writtenexamination_score);

    printf("COURSEWORK:");
    if (course_work_score<15){
        printf("FAIL\n");
    }else if(course_work_score>=15)
        printf("PASS\n");
    printf("WRITTEN EXAMS:");
    if (writtenexamination_score<15){
        printf("FAIL\n");
    }else if(writtenexamination_score>=15)
        printf("PASS\n");
    printf("TOTAL SCORE: %.0lf\n",course_work_score+writtenexamination_score);
    printf("DETERMINATION:");
    scanf("%s",&pass_or_fail);

    printf("=================\n");
    printf("ENTER TOTAL SCORE:");
    scanf("%lf",&total_score);
    printf("PERCENTAGE SCORE:%.0lf(percent)\n",total_score/50*100 );

    printf("STUDENT'S GRADE:");
    if (total_score/50*100>=0 && total_score/50*100<=39){
     printf("F");
    }else if(total_score/50*100>=40 && total_score/50*100<=49){
    printf("D");
    }else if(total_score/50*100>=50 && total_score/50*100<=59){
    printf("C");
    }else if(total_score/50*100>=60 && total_score/50*100<=69){
    printf("B");
    }else if(total_score/50*100>=70 && total_score/50*100<=100){
    printf("A");
    }

return 0;
}
