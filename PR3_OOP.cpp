#include "pch.h"

int main()
{
	Vector v1(1, 2, 4, 5), v2(2, 3, 5, 6),v3;
	v3 = v1 + v2;
	v3.getCoordinates();

}
