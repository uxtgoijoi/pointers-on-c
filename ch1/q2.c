/*编写一个程序，从标准输入读取几行输入。每行输入都要打印在标准输出上，前面要加上行号。在编写这个程序时要试图让程序能够处理的输入行的长度没有限制。*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int count=0;
	int i;
	char *p;
	do
	{
		printf("继续输入行请输入１\n");
		scanf("%d",&i);
		if(i==1)
		{
			count++;
			printf("请输入行\n");
			scanf("%s",p);
			printf("%d %s\n",count,p);
			i=0;
		}
		else
		{
			break;
		}
	}
	while(1);

	return 0;
}

//bug
//输入中有空格时会结束程序