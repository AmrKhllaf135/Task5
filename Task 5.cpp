#include<stdio.h>
struct Course{
	float credit_hours;
	float student_score;
	
};
struct Student{
	float array_of_courses[2];
	float GPA;
};
float calc_GPA(float scores ,float scoreprog)
{
	float result ;
	result = ((scores*3)+(scoreprog*4))/7;
	return result;
}
int main()
{
	struct Course gp;
	printf("What is your score in math : \n");
	scanf("%f" , &gp.student_score);
	float scores = gp.student_score;
	printf("What is your score in Prog : \n");
	scanf("%f" , &gp.student_score);
	float scoreprog = gp.student_score;
	struct Student st;
	st.GPA = ((scores*3)+(scoreprog*4))/7;
	printf("GPA is : %f" , calc_GPA(scores, scoreprog));
	 
}
