#include<stdio.h>
#include<stdlib.h>
#include "NameCard.h"

NameCard * MakeNameCard(char * name, char * phone)
{
	Namecard -> name = name;
	Namecard -> phone = phone;
	return Namecard;
}

void	showNameCardInfo(NameCard * pcard)
{
	printf("%s", name);
	printf("%s", phone);
}

int NameCompare(NameCard * pcard, char * name)
{
	if(pcard -> name == name)
		return 0;
	else 
		return 1;
}

void	ChangePhoneNum(NameCard * pcard, char * phone)
{
	pcard -> phone = phone;
}
