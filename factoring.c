#include "factor.h"

/**
 * factorize - factorizes a number
 * @buffer: pointer to the address
 * Return: int
 */
int factorize(char *buffer)
{
	u_int32_t st8;
	u_int32_t tem;


	for (tem = 2; tem < st8; tem++)
	{
		if (st8 % tem == 0)
		{
			printf("%d=%d*%d\n",st8,st8/tem,tem);
			break;
		}
	}

return (0);
}
