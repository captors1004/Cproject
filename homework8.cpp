#include <stdio.h>

void main()
{
	int n = 0;  // 데이터 갯수
	int menu;   // 메뉴 선택값
	int i,j;    // for 반복문 변수

	double data[1000];  // 실수형 배열 데이터
	double max;			// 가장 큰 수
	double min;			// 가장 작은 수 
	double sum;			// 총합
	double average;		// 평균

	do
	{
		printf("-----------------------------\n");
		printf("   데이터 처리 프로그램      \n");
		printf("-----------------------------\n");
		printf("  1. 데이터 입력\n");
		printf("  2. 가장 큰 수 출력\n");
		printf("  3. 가장 작은 수 출력\n");
		printf("  4. 총합 출력\n");
		printf("  5. 평균 출력\n");
		printf("  6. 그래프 출력\n");
		printf("  7. 종료\n");
		printf("-----------------------------\n");
		printf("> 번호를 선택하세요: ");
		scanf("%d", &menu);

		if(menu == 1)  // 1. 데이터 입력
		{
			n = 0;
			printf(">> 입력할 데이터의 갯수는? ");
			scanf("%d", &n);

			// 프로그램 작성 (for문과 scanf를 이용하여 키보드 입력값을 배열에 저장) <-----------

			printf("\n** 데이터 입력 완료!! **\n");
		}
		else if(menu == 2)  // 2. 가장 큰 수 출력
		{
			if(n == 0)
			{
				printf("*** 입력된 데이터가 없습니다!\n");
			}
			else
			{
				max = -10000000.0;
				for(i = 0; i < n; i++)
				{
					if(data[i] > max)
					{
						max = data[i];
					}
				}
				printf("\n >> 가장 큰수 = %.4lf\n", max);
			}
		}
		else if(menu == 3) // 3. 가장 작은 수 출력
		{
			// 프로그램 작성 <-------------------------------------------------------
		}
		else if(menu == 4)  // 총합 출력
		{
			if(n == 0)
			{
				printf("** 입력된 데이터가 없습니다!\n");
			}
			else
			{
				sum = 0.0;
				for(i = 0; i < n; i++)
				{
					sum += data[i];
				}
				printf("\n >> 총합 = %.4lf\n", sum);
			}
		}
		else if(menu == 5)  // 평균 출력
		{
			// 프로그램 작성 <-------------------------------------------------------
		}
		else if(menu == 6)  // 그래프 출력
		{
			if(n == 0)
			{
				printf("** 입력된 데이터가 없습니다!\n");
			}
			else
			{
				printf("\n");
				for(i = 0; i < n; i++)
				{
					for(j = 0; j < (int)data[i]; j++)
					{
						// 프로그램 작성 <------------------------------------------
					}
					printf("\n");
				}
			}
			printf("\n");
		}
		else if(menu == 7)
		{
			printf("종료합니다!!\n");
		}
		else  // 잘못된 메뉴 번호 선택 
		{
			printf("> 번호를 다시 선택하세요!!!\n");
		}
		printf("\n");

	} while(menu != 7);
}
