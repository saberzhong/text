#include <stdio.h> 
#include <math.h> 
void main() 
{ 
	int x,r,n;
	int change(int x,int r);
    printf("������һ��ʮ���Ƶ����Լ���Ҫת���ɵĽ��ƣ�");
	scanf("%d,%d",&x,&r);
	
	printf("ת��Ϊ%d���Ƽ�Ϊ��\n",r);
	change(x,r);
}

int change(int x,int r)
{
	int i=0,j,m,k;
	int num[100];
	int n[100];
	while((m=x/r)!=0)
	{
	j=x%r;
	num[i++]=j;
	x=m;
}
num[i]=x;
printf("%d���Ƽ�Ϊ��",r);
for(k=0;i>=0;i--,k++)
{
	n[k]=num[i];
    printf("%c",n[k]);
}
return 0;
}


