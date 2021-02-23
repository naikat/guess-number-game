 //猜数字游戏
 //1. 电脑会生成一个随机数
 //2.猜数字

#include<stdio.h>
#include<time.h>
#include<stdlib.h>



void menu()
{
	printf("******************************\n");
	printf("****** 1.play    0.exit ******\n");
	
}

void game()
{
	//1.生成随机数   rand()
	//2.猜数字
	int ret = 0;
	int guess = 0;
	//srand((unsigned int) time(NULL));//用来设置一个随机起点 用来设置rand
	//拿时间戳来设置随机数的生成起始点
	//(unsigned int) time(NULL) 时间戳
	//(NULL)即 空指针 无实际效果
	
	ret = rand()%100+1;//生成随机数(0-32767)
	//printf("%d\n", ret);
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
		
	}



	printf("猜数字\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//用来设置一个随机起点 用来设置rand
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}

	} while (input);
	return 0;
}
