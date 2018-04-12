
#include "Manny_Astar.h"


template <class T>
inline double udFunc_Manny(T func, double param1, double param2)
{
	if (func)
		return func(param1, param2);

	return 1.5;
}

template <class T>
inline int uiFunc_Manny(T func, int param1, int param2)
{
	if (func)
		return func(param1, param2);

	return 1;
}

CAStar::CAStar()
{

	udManny_Cost_1 = NULL;
	udSoto_Distance_1 = NULL;

}

CAStar::~CAStar()
{
}


int CAStar::LinkChild(int int_A, int int_B)
{
	int g = 0;

	g = uiFunc_Manny(udManny_Cost_1, int_A, int_B);

	return g;
}

double CAStar::LinkChild(double dbl_A, double dbl_B)
{

	double h = 0;
	h = udFunc_Manny(udSoto_Distance_1, dbl_A, dbl_B);

	return h;

}
