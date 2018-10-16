#include "IdentifyQuarter.h"
#include <stdio.h>
#include <iostream>

IdentifyQuarter::IdentifyQuarter()
{
}


IdentifyQuarter::~IdentifyQuarter()
{
}

void IdentifyQuarter::idfQuater()
{
	int month;
	printf("Enter the month that you want to identify: ");
	scanf_s("%d", &month);
	if (month < 1 || month > 12)
	{
		std::cout << "month is not validated!!!" << std::endl;
	}
	else
	{
		std::cout << "month " << month << " is " << ((month - 1) / 3 + 1) << std::endl;
	}
}


int main()
{
	IdentifyQuarter::idfQuater();
	return 1;
}