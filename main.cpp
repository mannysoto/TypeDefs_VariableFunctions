#include <iostream>

#include "Manny_Astar.h"

using namespace std;

static int AS_Valid(int, int);
static double AS_Cost(double, double);


int main()
{

	CAStar m_A_Star;
	int intFunction = 0;
	double dblFunction = 0;

	int i, j;
	double k = 1.0, l = 10.0;

	m_A_Star.udManny_Cost_1 = AS_Valid;
	m_A_Star.udSoto_Distance_1 = AS_Cost;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			intFunction += m_A_Star.LinkChild(i, j);
			dblFunction += m_A_Star.LinkChild(k += 1.0, l -= 1.0);
		}
	}

    return 0;
}



int AS_Valid(int a, int b)
{
	return (a + b);
}

double AS_Cost(double a, double b)
{
	return (a + b);
}


