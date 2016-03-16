#include "specialCounter.h"


#include <iostream>

using namespace std;

SpecialCounter::SpecialCounter()
{
	int counterstart = 0;
	int counterend = 255;
	int counter = 0;
}

void SpecialCounter::start(int startv)
{
	counterstart = startv;
	if (counter < startv)
		counter = startv;

}

void SpecialCounter::stop(int stopv)
{
	counterend = stopv;
		if (counter > stopv)
			counter = stopv;
}

void SpecialCounter::stepInc(int stepsize)
{
	while (counter != stopv)
	{
		counter = counter + stepsize;
	}
}

void SpecialCounter::stepDec(int stepsize)
{
	while (counter != startv)
	{
		counter = counter - stepsize;
	}
}

int& SpecialCounter::operator++(void)
{
	if counter < counterend
		counter++;
	return counter
}

int SpecialCounter::operator++(int)
{
	int c = counter;
	if counter < counterend
	{
		++c;
	}
	return c;
}

int& SpecialCounter::operator--(void)
{
	if counter > counterstart
	{
		counter--;
	}
	return counter;
}

int SpecialCounter::operator--(int)
{
	int c1 = counter;
	if counter > counterstart
	{
		--c1;
	}
	return c1;
}

SpecialCounter::~SpecialCounter()
{
}



