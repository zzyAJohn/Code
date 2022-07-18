void Prinmove(int num,char a,char b)
{
	printf("%d盘：%c->%c\n",num,a,b);
}

void Move(int num,char A,char B,char C) //三根柱子 A,B,C
{
	if (num == 1) //当n=1，直接从A->c
	{
		Prinmove(num,A, C);
		return;
	}
	else
		Move(num - 1, A,C,B);//将（n-1）放在B柱子上
		Prinmove(num,A, C);//将第n个放在C上
		Move(num - 1, B, A, C);//再将（n-1）个从B放到C
}

int main()
{
	int num = 0;
	printf("请输盘数\n");
	scanf("%d", &num);
	Move(num,'A','B','C');
	system("pause");
	return 0;
}