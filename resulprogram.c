#include<stdio.h>
int main(){
	int phy,chem,bio,maths,comp; //Declaring variables for marks
	float per; //declaring float variable to get percentage3 value in decimal
	printf("Insest the marks of phy, chem, bio, maths, comp \n");
	scanf("%d %d %d %d %d", &phy, &chem, &bio, &maths, &comp); //input from user
	per = (phy + chem + bio + maths + comp)/5.0; //calculation of percentage
	printf("Percentage = %.3f \n",per); //output 1= percentage
	if(per >= 90){
		printf("Grade A");	//if percent greater than 90, output = grade A
	}
	else if(per >= 80){
		printf("Grade B");	//if percent greater than 80, output = grade B
	}
	else if(per >= 70){
		printf("Grade C");	//if percent greater than 70, output = grade C
	}
	else if(per >= 60){
		printf("Grade D");	//if percent greater than 60, output = grade D
	}
	else if(per >= 40){
		printf("Grade E");	//if percent greater than 40, output = grade E
	}
	else{
		printf("Failed");	//if percent less than 40%, output = failed
	}
	return 0;
}
