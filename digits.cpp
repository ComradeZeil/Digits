/*This piece code intends to realize the convertion between decimals, binaries, octals and hexadecimals. Only integer part is included. */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	int decToOther(int in, int base);				//base: binary(2), octal(8), hexadecimal(16)
	int base, dec, out;
	printf("Input base:");
	scanf("%d", &base);
	printf("Input decimal:");
	scanf("%d", &dec);
	out = decToOther(dec, base);
	printf("Output:%d\n", out);
	getchar();
	getchar();
}

int decToOther(int in, int base)				//base: binary(2), octal(8), hexadecimal(16)
{
	int i, r, q, nm, sum;
	nm = in, sum = 0;
	for (i = 0;; i++)
	{
		r = nm%base;
		q = nm / base;
		sum += r*pow(10.0, (int)i);
		if (q != 0)
		{
			nm = q;
		}
		else
		{
			break;
		}
	}
	return sum;
}