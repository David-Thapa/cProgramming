#include<stdio.h>
void bubblESort(int ,int[]);
void disPLay(int, int[]);
void selectioNSort(int, int[]);
void insertioNSort(int, int[]);
int main()
{
	int i,n,num[50];
	printf("how many intergers:-\n");
	scanf("%d",&n);
	printf("Enter the intergers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	insertioNSort(n,num);

}

void selectioNSort(int n, int num[])
{
	int i,j,temp,min;
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(num[min]>num[j])
			{
				min = j;
			}
		}
		if(min != i)
		{
			temp = num[i];
			num[i] = num[min];
			num[min] = temp;
		}
	}
	disPLay(n,num);
}

void bubblESort(int n, int num[])
{
	int i,j,temp;
	printf("\n");
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(num[j]>num[j+1])
			{
				temp = num[j+1];
				num[j+1] = num[j];
				num[j] = temp;
			}
		}
	}
	disPLay(n,num);
}

void insertioNSort(int n, int num[])
{
	int i,j,temp,position;
	for(i=1;i<n;i++)
	{
		position = num[i];
		j = i-1;
		while(j>=0 && num[j] > position)
		{
			num[j+1]= num[j];
			j = j-1;
		}
		num[j+1] = position;
	}
	disPLay(n, num);
}

void disPLay(int n, int num[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",num[i]);
	}	
}


