#include "../thirdparty/ctest.h"
#include "../src/statlib/SP.h"
#include "../src/statlib/Check.h"
#include <math.h>
CTEST(Test_test, BOB)
{
	const int result = 1;
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}
CTEST(Test_s, test2)
{
	int x1 = 2;
	int y1 = 5;
	int r1 = 10;
	const int expected = 300;
	int res = circle(x1, y1, r1);
	ASSERT_EQUAL(expected, res);
}
CTEST(arithmetic_S, test1)
{
	int x1 = 5;
	int x2 = 2;
	int y1 = 5;
	int y2 = 2;
	int r1 = 4;
	int r2 = 3;
	const int expected = 1;
	int res = check(x1, x2, y1, y2, r1, r2);
	ASSERT_EQUAL(expected, res);
}
