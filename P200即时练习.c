#include<stdio.h>
struct staff
{
	char name[15];
	int num;
	char zc[15];
	float gz;
	char bumen[20];
}gr[3],*p,*q;
void main()
{
	FILE *fp;
	int i;
	p=gr;
	if((fp=fopen("d:\\FILETEST\\100.txt","wb+"))==NULL)
	{
		printf("Cannot open file strike any key exit!");
		getch();
		exit(1);
	}
	printf("��������ְ������Ϣ\n");
	printf("����	����	ְ��	����	��������\n");
	for(i=0;i<3;i++,p++)
		scanf("%s%d%s%f%s",p->name,&p->num,p->zc,&p->gz,p->bumen);
	p=gr;
	fwrite(p,sizeof(struct staff),3,fp);
	rewind(fp);
	fread(p,sizeof(struct staff),3,fp);
	printf("�������£�\n");
	printf("����	����	ְ��	����	��������\n");
	for(i=0;i<3;i++,p++)
		printf("%s\t%d\t%s\t%.2f\t%s\n",p->name,p->num,p->zc,p->gz,p->bumen);
	fclose(fp);
}