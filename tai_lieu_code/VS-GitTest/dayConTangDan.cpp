#include <stdio.h>
int main()
{
	int n, c, dem = 1, max = 0;
	scanf("%d", &n);
	int a[100001], dd[100005] = {0};
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		a[n] =- 100001;
		c = i + 1;
		if(a[i] < a[i + 1])
		{
		    dem++;
		}
		else if(a[i] > a[i + 1])
		{
		    dd[c] = dem;
	    	dem = 1;
	    }
	}
    for(int i = 1; i <= 100000; i++)
	{
		if(max <= dd[i]) max = dd[i];
	}
	printf("%d\n", max);
	for(int i = 1; i <= 100000; i++)
	{
		if(dd[i] == max)
		{
			for(int j = i - max; j <= i - 1; j++)
			{
				printf("%d ", a[j]);
			}
			printf("\n");
		}
	}	
	return 0;
}