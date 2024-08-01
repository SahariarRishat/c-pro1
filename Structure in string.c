#include<stdio.h>


struct student {

int id;
float cgpa;
char name[20];



};




int main (){

struct student s;

printf("Enter your id: \n");
scanf("%d ", &s.id);



printf("Enter your cgpa: \n");
scanf("%f", &s.cgpa);


printf("Enter your Name: \n");
scanf("%s ", s.name);


printf ("Name : %s ; Id: %d; Cgpa:%.0f \n", s.name, s.id, s.cgpa);



return 0;
}
