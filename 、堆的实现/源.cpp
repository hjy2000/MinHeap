#include<iostream>
using namespace std;

int heap1[] = { 10,8,11,45,34,56,19,30,11,23 };
int heap2[] = { 10,8,11,45,34,56,19,30,11,23 };

void siftdown(int f, int m)
{
	int i = f, j = 2 * i + 1;
	int temp = heap1[i];
	while (j <= m)
	{
		if (j<m && heap1[j]>heap1[j + 1])j++;
		if (temp <= heap1[j])break;
		else
		{
			heap1[i] = heap1[j];i = j;j = 2 * j + 1;
		}
		heap1[i] = temp;
	}
}
void siftup(int f)
{
	int j = f;
	int i = (j - 1) / 2;
	int temp = heap2[j];
	while (j > 0)
	{
		if (heap2[i] < temp)break;
		else { heap2[j] = heap2[i];j = i;i = (i - 1) / 2; }

	}
	heap2[j] = temp;
}

void main()
{
	for (int i = 0;i < 10;i++)
	{
		siftdown(i, 9);
	}
	for (int i = 0;i < 10;i++)
	{	
		cout << heap1[i] << " ";
	}
	cout << endl;

		for (int i = 0;i < 10;i++)
		{
			siftup(i);
		}
	
	for (int i = 0;i < 10;i++)
	{
		cout << heap2[i] << " ";
	}
}