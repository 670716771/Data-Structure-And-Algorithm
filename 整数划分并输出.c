#include<stdio.h>

int num[100] = {0};

void dfs(int n, int k, int plies){	//n����ǰҪ���л��ֵ�����k����ǰ���ֲ��ܳ���������plies����ǰ���ֵĲ��
	int start, i;
	if(n == 0)
	{
		for(i=0; i<plies; i++)
			printf("%d ", num[i]);
		printf("\n");
		return;
	}
	if(k>n)
		start = n;
	else
		start= k;
	while(start>0)
	{
		num[plies] = start;
		dfs(n-start, start, plies+1);
		start--;
	}
}

void main(void){
	int n, plies = 0; //plies����������ǰ���ְ������ٸ����ݣ����ٲ㣩
	scanf("%d", &n);
	dfs(n, n, 0);		//��6��ʼ���֣�����Ϊ������6�Ľ������ǰ�ǵ�0�㣬����1����
}