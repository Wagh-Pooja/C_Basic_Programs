#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Grade ='A';
    int R_No =0;
    float Per = 0.0;
    char Nm[80]="";

    printf("\nEnter Student Details=");

    printf("\n\t Enter Student Roll Number =");
    scanf("%d",&R_No);

    printf("\n\t Enter Student Name =");
    scanf("%s",&Nm);

    printf("\n\t Enter Student Percentage =");
    scanf("%f",&Per);

    printf("\n\t Enter Student Grade =");
    scanf(" %c",&Grade);

    system("cls");

    printf("\nStudent Information\n");

    printf("\n========*****========\n");

    printf("\nRoll Number = %d. \nName        = %s. \nPercentage. = %0.2f. \nGrade       = %c.",R_No,Nm,Per,Grade);

    printf("\n\n========*****========\n\n");
    getch();
    return 0;
}
