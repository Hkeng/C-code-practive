//A�ļ������ĸ������������B�ļ������ĸ����
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	FILE *fp1,*fp2,*fp3;
	char ch1,ch2,ch3;
	if((fp1=fopen("d:\\FILETEST\\A.txt","rt"))==NULL)
	{
		printf("Cannot open file A strike any key exit!");
		getch();
		exit(1);
	}
	if((fp2=fopen("d:\\FILETEST\\B.txt","rt"))==NULL)
	{
		printf("Cannot open file B strike any key exit!");
		getch();
		exit(1);
	}
	if((fp3=fopen("d:\\FILETEST\\C.txt","at+"))==NULL)
	{
		printf("Cannot open file C strike any key exit!");
		getch();
		exit(1);
	}
	printf("�ļ�A������Ϊ��\n");
	ch1=fgetc(fp1);
	while(ch1!=EOF)
	{
		putchar(ch1);
		fputc(ch1,fp3);
		ch1=fgetc(fp1);
	}
	rewind(fp3);
	printf("\n\n�ļ�B������Ϊ��\n");
	ch2=fgetc(fp2);
	while(ch2!=EOF)
	{
		putchar(ch2);
		fputc(ch2,fp3);
		ch2=fgetc(fp2);
	}
	rewind(fp3);
	printf("\n");
	printf("\n�ļ�C������Ϊ��\n");
	ch3=fgetc(fp3);
	while(ch3!=EOF)
	{
		putchar(ch3);
		ch3=fgetc(fp3);
	}
	printf("\n");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}