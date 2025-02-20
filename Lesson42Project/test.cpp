#include "test.h"

void print(int matrix[][N], int expected, string name)
{
	int actual = count_zero_elements(matrix);

	string msg = expected == actual ? "PASS(green)" : "FAIL(red)";

	cout << name << " - " << msg << endl;
	cout << "---------------------------------------------" << endl;
}


void test01()
{
	int matrix[][N]{
		{1,2,3,4,5},
		{2,3,4,5,6},
		{3,4,5,6,7},
		{8,1,2,3,4},
		{4,5,6,7,8} };

	int expected = 0;

	print(matrix, expected, "test01");
	
}

void test02()
{
	int matrix[][N]{
		{1,2,3,0,5},
		{2,3,0,5,6},
		{3,4,5,0,7},
		{8,1,0,3,4},
		{4,5,6,0,8} };

	int expected = 5;
	int actual = count_zero_elements(matrix);

	print(matrix, expected, "test02");
}

void test03()
{
	int matrix[][N]{
		{1,2,3,2,5},
		{2,3,1,5,6},
		{3,4,5,8,7},
		{8,1,7,3,4},
		{4,5,6,0,8} };

	int expected = 1;
	int actual = count_zero_elements(matrix);

	print(matrix, expected, "test03");
}

void test04()
{
	int matrix[][N]{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0} };

	int expected = 25;
	int actual = count_zero_elements(matrix);

	print(matrix, expected, "test04");
}