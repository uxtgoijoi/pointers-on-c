/*
编写一个程序，从标准输入读取一些字符，并把它们写到标准输出上。它同时应该计算checksum值，并写在字符的后面。
checksum(检查和)用一个singed char类型的变量进行计算，它初始为-1。当每个字符从标准输入读取时，它的值就被加到checksum中。如果checksum变量产出了溢出，那么这些溢出就会被忽略。当所有的字符均被写入后，程序以十进制整数的形式打印出checksum的值，它有可能是负值。注意在checksum后面要添加一个换行符。
在使用ASCII码的计算机中，在包含“Hello world!”这几个词并以换行符结尾的文件上裕兴这个程序应该产生下列输出：
	Hello world!
	102
*/

#include <stdio.h>

int main()
{
	char *p;
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
		;
	}


	return 0;
}