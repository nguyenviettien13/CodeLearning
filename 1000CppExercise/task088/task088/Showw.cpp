#include "Showw.h"
#include <stdio.h>


Showw::Showw()
{
}


Showw::~Showw()
{
}

void Showw::show88()
{
	for (int i = 65; i <= 90; i++)
	{
		printf("%c\n", i);
	}
}

int main()
{
	Showw::show88();
	return 1;
}