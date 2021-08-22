# include <stdio.h>
# include <stdlib.h>
struct Course{
	int Credit_Hours;
	float Student_Score;
};
struct student{
	float GPA;
	char Array_of_Courses[];
};
float check_GPA( float CSP, float CSM, float CHM, float CHP){
	float GPA;
	GPA = (CSM*CHM + CSP*CHP)/(CHP+CHM);
	return GPA;
}

int main(){
	float CSP, CSM, CHM, CHP;
	printf("Enter your Score in Maths :");
	scanf("%f", &CSM);
	printf("Enter your Score in Programming :");
	scanf("%f", &CSP);
	printf("Enter Maths Credit Hours :");
	scanf("%f", &CHM);
	printf("Enter Programming Credit Hours :");
	scanf("%f", &CHP);
	struct Course Math{
		Math.Credit_Hours = CHM};
		Math.Student_Score = CSM;
	struct Course Prog{
		Prog.Credit_Hours = CHP};
		Prog.Student_Score = CSP;
	struct student X ;{
		X.GPA = check_GPA(Prog.Student_Score, Math.Student_Score, Math.Credit_Hours, Prog.Credit_Hours);
	};
	printf("Your GPA is %f", X.GPA);
	return 0;
}
