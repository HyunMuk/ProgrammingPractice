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
			
		
		printf("\n===============%d�� �л��� ����� ����ǥ===============\n", student_num);
		
		for (test_num_eng = 1; test_num_eng <= 3; test_num_eng++)
		{
			if (test_num_eng == 1)
			{
				printf("%d�� �л��� ���ʰ�� ������ �Է��ϼ���: ", student_num);
			}
			else if (test_num_eng == 2)
			{
				printf("%d�� �л��� �������� ������ �Է��ϼ���: ", student_num);
			}
			else
			{
				printf("%d�� �л��� ���� ������ �Է��ϼ���: ", student_num);
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
		printf("%d��° �л��� ���� ������ %c, ����� %.1f, ������ %.1f�Դϴ�.\n", student_num, grade_eng, average_eng, total_eng);
	

	
		printf("\n===============%d�� �л��� ���б��� ����ǥ===============\n", student_num);
		for (test_num_math = 1; test_num_math <= 3; test_num_math++)
		{
			if (test_num_math == 1)
			{
				printf("%d�� �л��� ���� ���ʰ�� ������ �Է��ϼ���: ", student_num);
			}
			else if (test_num_math == 2)
			{
				printf("%d�� �л��� ���� ������ ������ �Է��ϼ���: ", student_num);
			}
			else
			{
				printf("%d�� �л��� ���� ���� ����� ������ �Է��ϼ���: ", student_num);
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

		printf("%d��° �л��� ���� ������ %c, ����� %.1f, ������ %.1f�Դϴ�.\n", student_num, grade_math, average_math, total_math);

		if (total_eng == 0)
		{
			printf("\n%d�� �л��� ���� ������ 0���Դϴ�. ������ ����� �Է��ߴ��� Ȯ���غ�����.\n", student_num);
			printf("%d�� �л��� ���� ������ 0���� �´ٸ� 1��, ������ ����� �Է����� ���� ���� �´ٸ� 0�� �Է��ϼ���.\n", student_num);
			scanf("%d", &award_possible_eng);
		}
		if (total_math ==0)
		{
			printf("\n%d�� �л��� ���� ������ 0���Դϴ�. ������ ����� �Է��ߴ��� Ȯ���غ�����.\n", student_num);
			printf("%d�� �л��� ���� ������ 0���� �´ٸ� 1��, ������ ����� �Է����� ���� ���� �´ٸ� 0�� �Է��ϼ���.\n", student_num );
			scanf("%d", &award_possible_math);
		}
		
		if (award_possible_eng == 0 || award_possible_math == 0)
		{
			printf("\n%d�� �л��� ������ ����� �Էµ��� �ʾ����Ƿ� ����� ���� �ڰ� ���θ� �� �� �����ϴ�.\n", student_num);
			prize = 'X';
		}
		else if(award_possible_eng == 1 && award_possible_math == 1 && average_eng >= 80 && average_math >= 80)
		{
			printf("\n%d�� �л��� ����, ���� ��� ������ ����� �� ����� ���� �ڰ��� �ֽ��ϴ�!\n", student_num);
			prize = 'O';
		}
		else
		{
			printf("\n%d�� �л��� ������ ����� �� ����� ���� �ڰ� ����� �ƴմϴ�! Sorry!\n" ,student_num);
			prize = 'X';
		}
		
		
		
	}	
	printf("\n�����ϼ̽��ϴ�. Thank you for taking the exam.");
	return 0;
}
