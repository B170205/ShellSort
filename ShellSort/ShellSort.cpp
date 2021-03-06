// ShellSort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
void shellSort(int a[], int n)
{
	int gap = n / 2;
	int i, j, tmp,k;
	while (gap > 0)
	{
		for (j = gap; j < n; j++)
		{
			tmp = a[j];
			k = j - gap;
			while(k>=0&&a[k]>tmp)
			{
				a[k + gap] = a[k];
				k -= gap;
			}
			a[k + gap] = tmp;
		}
		gap /= 2;
	}
}
void output(int a[],int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ",a[i]);
}
int main()
{
	int a[8] = { 1,-1,2,-2,3,-3,4,-4 };
	shellSort(a, 8);
	output(a, 8);
	//system("PAUSE");
	return 0;
}

