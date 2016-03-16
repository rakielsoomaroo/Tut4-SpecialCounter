#include "specialCounter.h"

#include<iostream>

using namespace std;

int main()
{
	SpecialCounter obj;

	SpecialCounter obj();

	int startv, stopv, step;
	cout << "enter a start value" << endl;
		cin >> startv;
		cout << "enter a stop value" << endl;
		cin >> stopv;
		cout << "enter a step value" << endl;
		cin >> step;

		obj.start(startv);
		obj.stop(stopv);
		obj.stepInc(step);
		obj.stepDec(step);

}
