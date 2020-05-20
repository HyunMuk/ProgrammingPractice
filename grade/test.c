#include <stdio.h>
int main()
{
	int student_num, test_num_eng, test_num_math, award_possible_eng, award_possible_math;
	float score_eng, score_math, average_eng, average_math , total_eng, total_math = 0;
	char grade_eng, grade_math, prize;

	for (student_num = 1; student_num <= 5; student_num++)
	{

		total_eng = 0;
		total_math = 0;
		award_possible_eng = 1;
		award_possible_math = 1;
		prize = 'X';
			
		
		printf("\n===============%d번 학생의 영어교과 성적표===============\n", student_num);
		
		for (test_num_eng = 1; test_num_eng <= 3; test_num_eng++)
		{
			if (test_num_eng == 1)
			{
				printf("%d번 학생의 지필고사 성적을 입력하세요: ", student_num);
			}
			else if (test_num_eng == 2)
			{
				printf("%d번 학생의 영어듣기평가 성적을 입력하세요: ", student_num);
			}
			else
			{
				printf("%d번 학생의 영작 성적을 입력하세요: ", student_num);
			}
			scanf("%f", &score_eng);
			total_eng += score_eng;
		}

		average_eng = total_eng / 3.0;
		if (average_eng >= 90)
			grade_eng = 'A';
		else if (average_eng >= 80)
			grade_eng = 'B';
		else if (average_eng >= 70)
			grade_eng = 'C';
		else if (average_eng >= 60)
			grade_eng = 'D';
		else
			grade_eng = 'F';
		printf("%d번째 학생의 영어 학점은 %c, 평균은 %.1f, 총점은 %.1f입니다.\n", student_num, grade_eng, average_eng, total_eng);
	

	
		printf("\n===============%d번 학생의 수학교과 성적표===============\n", student_num);
		for (test_num_math = 1; test_num_math <= 3; test_num_math++)
		{
			if (test_num_math == 1)
			{
				printf("%d번 학생의 수학 지필고사 성적을 입력하세요: ", student_num);
			}
			else if (test_num_math == 2)
			{
				printf("%d번 학생의 수학 수행평가 성적을 입력하세요: ", student_num);
			}
			else
			{
				printf("%d번 학생의 수학 도형 만들기 성적을 입력하세요: ", student_num);
			}
			scanf("%f", &score_math);
			total_math += score_math;
		}

		average_math = total_math / 3.0;
		if (average_math >= 90)
			grade_math = 'A';
		else if (average_math >= 80)
			grade_math = 'B';
		else if (average_math >= 70)
			grade_math = 'C';
		else if (average_math >= 60)
			grade_math = 'D';
		else
			grade_math = 'F';

		printf("%d번째 학생의 수학 학점은 %c, 평균은 %.1f, 총점은 %.1f입니다.\n", student_num, grade_math, average_math, total_math);

		if (total_eng == 0)
		{
			printf("\n%d번 학생의 영어 총점이 0점입니다. 성적을 제대로 입력했는지 확인해보세요.\n", student_num);
			printf("%d번 학생의 영어 총점이 0점이 맞다면 1을, 성적을 제대로 입력하지 않은 것이 맞다면 0을 입력하세요.\n", student_num);
			scanf("%d", &award_possible_eng);
		}
		if (total_math ==0)
		{
			printf("\n%d번 학생의 수학 총점이 0점입니다. 성적을 제대로 입력했는지 확인해보세요.\n", student_num);
			printf("%d번 학생의 수학 총점이 0점이 맞다면 1을, 성적을 제대로 입력하지 않은 것이 맞다면 0을 입력하세요.\n", student_num );
			scanf("%d", &award_possible_math);
		}
		
		if (award_possible_eng == 0 || award_possible_math == 0)
		{
			printf("\n%d번 학생의 성적이 제대로 입력되지 않았으므로 우수상 수여 자격 여부를 알 수 없습니다.\n", student_num);
			prize = 'X';
		}
		else if(award_possible_eng == 1 && award_possible_math == 1 && average_eng >= 80 && average_math >= 80)
		{
			printf("\n%d번 학생의 영어, 수학 평균 점수를 고려할 때 우수상 수여 자격이 있습니다!\n", student_num);
			prize = 'O';
		}
		else
		{
			printf("\n%d번 학생은 성적을 고려할 때 우수상 수여 자격 대상이 아닙니다! Sorry!\n" ,student_num);
			prize = 'X';
		}
		
		
		
	}	
	printf("\n수고하셨습니다. Thank you for taking the exam.");
	return 0;
}
