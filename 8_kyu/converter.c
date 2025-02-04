/*
Sometimes, I want to quickly be able to convert miles per imperial gallon (mpg) into kilometers per liter (kpl).

Create an application that will display the number of kilometers per liter (output) based on the number of miles per imperial gallon (input).

Make sure to round off the result to two decimal points.

Some useful associations relevant to this kata:

1 Imperial Gallon = 4.54609188 litres
1 Mile = 1.609344 kilometres
*/

#include <math.h>

double converter(int mpg) {

	const double	factor = 1.609344 / 4.54609188;
	double	result;

	result = (double)mpg * factor;
	return (round(result * 100) / 100.0);
}

/*
Understanding the Task
	Convert miles per imperial gallon (mpg) to kilometers per liter (kpl).
	Formula:
		𝑘𝑝𝑙 = 𝑚𝑝𝑔 × 1.609344/4.54609188
	Round the result to two decimal places.

Optimized Approach
	Use a precise conversion factor:
		factor = 1.609344 / 4.54609188 ≈ 0.354006
	Multiply mpg by factor.
	Round the result to two decimal places.
	Return the final value.

✅ Explicit typecasting: (double)mpg * factor ensures proper floating-point precision.
✅ Uses round() from <math.h> to correctly round to two decimal places.
*/