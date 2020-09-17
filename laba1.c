#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long main()
{
	long long N, K, a = 1, b = 1, d=1;
	printf("The number N must be greater than or equal to the number K");
	printf("\n     Input N ");
	scanf("%lli", &N);
	printf("\n     Input K ");
	scanf("%lli", &K);
	if (K > N)
	{
		printf("\nError. You wrote incorrect values");
	}
	
	if (N == K || K == 0)
	{
		printf("\nAnswer 1");
	}
	else
	{
		for (long long x = N; x >= 1; x--)
		{
			a = a * x;
		}
		for (long long y = K; y >= 1; y--)
		{
			b = b * y;
		}
		long long c;
		c = N - K;
		for (long long z = c; z >= 1; z--)
		{
			d = d * z;
		}
		long long C;
		C = a / (b * d);
		printf("\nAnswer %lli", C);


	}
	return 0;

}