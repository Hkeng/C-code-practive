#include<stdio.h>
struct staff
{
	char name[15];
	int num;
	char zc[15];
	float gz;
	char bumen[20];
}gr4,gr[4];
void main()
{
	FILE *fp;
	struct  staff *p,*q;
	int i;
	if((fp=fopen("d:\\FILETEST\\100.txt","ab+"))==NULL)
	{
		printf("Cannot open file strike any key exit!");
		getch();
		exit(1);
	}
	printf("输入第四个职工的信息\n");
	printf("姓名	工号	职称	工资	所属部门\n");
	scanf("%s%d%s%f%s",gr4.name,&gr4.num,gr4.zc,&gr4.gz,gr4.bumen);
	p=&gr4;
	q=gr;
	fwrite(p,sizeof(struct staff),1,fp);
	rewind(fp);
	fread(q,sizeof(struct staff),4,fp);
	printf("\n四位职工的信息为：\n");
	printf("姓名	工号	职称	工资	所属部门\n");
	for(i=0;i<4;i++,q++)
		printf("%s\t%d\t%s\t%.2f\t%s\n",q->name,q->num,q->zc,q->gz,q->bumen);
	fclose(fp);
}