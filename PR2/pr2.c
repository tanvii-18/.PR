#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	char grade;
	
	printf("Enter your marks :");
	scanf("%d", &marks);
	

	
		grade=(marks>=80)? 'A'
	
			:(marks>=60)? 'B'
		
				:(marks>=40)?'C'
			
					:(marks>=20)? 'D'
			
						:(marks>=0)? 'D' : 'F';
						
			 	printf("your grade is %c\n", grade);
			                   
			switch(grade)
			{	
				case 'A': printf("exellent work !\n");
				break;
				case 'B': printf("Well done !\n");
				break;
				case 'C': printf("Good Job !\n");
				break;
				case 'D': printf("You passed, but you could do better.\n");
				break;
				case 'F': printf("Sorry, you failed.\n");
				break;
				default: printf("Enter valid number");
				break;
				
			}
		
			
			
			
			if(marks>=20)
			{
				printf("Congratulations! You are eligible for the next level");
			}
			else
			{
				printf("Please try again next time");
			}
			
						
				
	}