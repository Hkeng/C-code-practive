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
	printf("������ĸ�ְ������Ϣ\n");
	printf("����	����	ְ��	����	��������\n");
	scanf("%s%d%s%f%s",gr4.name,&gr4.num,gr4.zc,&gr4.gz,gr4.bumen);
	p=&gr4;
	q=gr;
	fwrite(p,sizeof(struct staff),1,fp);
	rewind(fp);
	fread(q,sizeof(struct staff),4,fp);
	printf("\n��λְ������ϢΪ��\n");
	printf("����	����	ְ��	����	��������\n");
	for(i=0;i<4;i++,q++)
		printf("%s\t%d\t%s\t%.2f\t%s\n",q->name,q->num,q->zc,q->gz,q->bumen);
	fclose(fp);
}