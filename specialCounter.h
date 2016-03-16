#pragma once


class SpecialCounter
{
	//friend ostream &operator<< (ostream &output, const Dice &Dice_in)

private:
	int counter
		int counterstart = 0;
	int counterend = 255;;

public:
	void start(int startv);
	void stop(int stopv);
	void stepInc(int stepsize);
	void stepDec(int stepsize);

	~SpecialCounter();
};
