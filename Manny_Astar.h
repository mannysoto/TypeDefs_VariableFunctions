

#ifndef _MANNY_ASTAR_H_
#define _MANNY_ASTAR_H_

#ifndef NULL
#define NULL 0
#endif

typedef int(*_asFuncManny)(int, int); // A function with no name, that takes two int arguments and returns an int value
typedef double(*_asFuncSoto)(double, double); // A function with no name, that takes two double arguments and returns a value of type double


class CAStar{

public:
	CAStar();
	~CAStar();

	_asFuncManny udManny_Cost_1; // Create a static function that takes two int arguments and returns an int value and assign the name of that function to this property
	_asFuncSoto udSoto_Distance_1; // Create a static function with that takes two double arguments and returns a value of type double and assign the name of that function to this property

	int LinkChild(int, int);
	double LinkChild(double, double);

};

#endif

