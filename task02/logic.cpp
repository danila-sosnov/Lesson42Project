#include "logic.h"

string get_raw_with_zero_value(int matrix[N][N])
{
	string s = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] == 0)
			{
				s += to_string(i + 1) + " ";
				break;
			}
		}

	}
	
	return s;
}