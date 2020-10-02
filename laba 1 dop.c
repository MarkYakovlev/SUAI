#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int N, K, a = 1, b=1, d = 1;
	printf("The number N must be greater than or equal to the number K");
	printf("\n     Input N ");
	scanf("%d", &N);
	printf("\n     Input K ");
	scanf("%d", &K);
	if (K > N || K<0 || N<0)
	{
		printf("\nError. You wrote incorrect values");
		return 0;
	}
	if (N == K || K == 0)
	{
		printf("\nAnswer 1");
		return 0;
	}
    if (K < N / 2)
	{
		for (int i = (N - K)+1
			; i < N + 1; i++)
		{
			b = b * i;
	    }
		for (int x = K; x >= 1; x--)
		{
			d = d * x;
		}
		int L;
		L = b / d;
		printf("\nAnswer %d", L);
		return 0;
	}
	else
	{
		for (int i = K+1; i < N+1; i++)
		{
			a = a * i;
		}
		int c;
		c = N - K;
		for (int z = c; z >= 1; z--)
		{
			d = d * z;
		}
		int C;
		C = a / d;
		printf("\nAnswer %d", C);
	}
	return 0;

}