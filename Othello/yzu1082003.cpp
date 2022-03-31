#include <iostream>
#include <iomanip>
using namespace std;
struct team
{
	int who;
	int A[8][8];
};
struct point
{
	int x;
	int y;
};
extern "C"
{
	__declspec(dllexport) struct point play(struct team t)
	{
		int i, j;
		int k, h;
		struct point p;
		if (t.who == 1)
		{
			for (i = 0; i < 8; i++)
				for (j = 0; j < 8; j++)
					for (k = 2; k < 8; k++)
						for (h = 1; h < 7; h++)
						{
							if ((t.A[i][j + k] == 1) && (j + k < 8) && (t.A[i][j + (k - h)] == 2) && (t.A[i][j] == 0) && (t.A[i][j + 1] == 2) && (k - h > 0) && (t.A[i][j + (k - 1)] == 2) && (k - 1 < k))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i + k][j] == 1) && (i + k < 8) && (t.A[i + (k - h)][j] == 2) && (t.A[i][j] == 0) && (t.A[i + 1][j] == 2) && (k - h > 0) && (t.A[i + (k - 1)][j] == 2) && (k - 1 < k))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i][j - k] == 1) && (j - k > 0) && (t.A[i][j - (k - h)] == 2) && (t.A[i][j] == 0) && (t.A[i][j - 1] == 2) && (k - h > 0) && (t.A[i][j - (k + 1)] == 2) && (k + 1 > k))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i - k][j] == 1) && (i - k > 0) && (t.A[i - (k - h)][j] == 2) && (t.A[i][j] == 0) && (t.A[i - 1][j] == 2) && (k - h > 0) && (t.A[i - (k + 1)][j] == 2) && (k + 1 > k))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i - k][j + k] == 1) && (i - k > 0) && (j + k < 8) && (t.A[i - (k - h)][j + (k - h)] == 2) && (t.A[i][j] == 0) && (t.A[i - 1][j + 1] == 2) && (k - h > 0) && (t.A[i - (k - 1)][j + (k + 1)] == 2))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i - k][j - k] == 1) && (i - k > 0) && (j - k > 0) && (t.A[i - (k - h)][j - (k - h)] == 2) && (t.A[i][j] == 0) && (t.A[i - 1][j - 1] == 2) && (k - h > 0) && (t.A[i - (k - 1)][j - (k - 1)] == 2))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i + k][j + k] == 1) && (i + k < 8) && (j + k < 8) && (t.A[i + (k - h)][j + (k - h)] == 2) && (t.A[i][j] == 0) && (t.A[i + 1][j + 1] == 2) && (k - h > 0) && (t.A[i + (k + 1)][j + (k + 1)] == 2))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i + k][j - k] == 1) && (i + k < 8) && (j - k > 0) && (t.A[i + (k - h)][j - (k - h)] == 2) && (t.A[i][j] == 0) && (t.A[i + 1][j - 1] == 2) && (k - h > 0) && (t.A[i + (k + 1)][j - (k - 1)] == 2))
							{
								p.x = i;
								p.y = j;
								return p;
							}
						}
		}
		else if (t.who == 2)
		{
			for (i = 0; i < 8; i++)
				for (j = 0; j < 8; j++)
					for (k = 2; k < 8; k++)
						for (h = 1; h < 7; h++)
						{
							if ((t.A[i][j + k] == 2) && (j + k < 8) && (t.A[i][j + (k - h)] == 1) && (t.A[i][j] == 0) && (t.A[i][j + 1] == 1) && (k - h > 0) && (t.A[i][j + (k - 1)] == 1) && (k - 1 < k))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i + k][j] == 2) && (i + k < 8) && (t.A[i + (k - h)][j] == 1) && (t.A[i][j] == 0) && (t.A[i + 1][j] == 1) && (k - h > 0) && (t.A[i + (k - 1)][j] == 1) && (k - 1 < k))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i][j - k] == 2) && (j - k > 0) && (t.A[i][j - (k - h)] == 1) && (t.A[i][j] == 0) && (t.A[i][j - 1] == 1) && (k - h > 0) && (t.A[i][j - (k + 1)] == 1) && (k + 1 > k))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i - k][j] == 2) && (i - k > 0) && (t.A[i - (k - h)][j] == 1) && (t.A[i][j] == 0) && (t.A[i - 1][j] == 1) && (k - h > 0) && (t.A[i - (k + 1)][j] == 1) && (k + 1 > k))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i - k][j + k] == 2) && (i - k > 0) && (j + k < 8) && (t.A[i - (k - h)][j + (k - h)] == 1) && (t.A[i][j] == 0) && (t.A[i - 1][j + 1] == 1) && (k - h > 0) && (t.A[i - (k - 1)][j + (k + 1)] == 1))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i - k][j - k] == 2) && (i - k > 0) && (j - k > 0) && (t.A[i - (k - h)][j - (k - h)] == 1) && (t.A[i][j] == 0) && (t.A[i - 1][j - 1] == 1) && (k - h > 0) && (t.A[i - (k - 1)][j - (k - 1)] == 1))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i + k][j + k] == 2) && (i + k < 8) && (j + k < 8) && (t.A[i + (k - h)][j + (k - h)] == 1) && (t.A[i][j] == 0) && (t.A[i + 1][j + 1] == 1) && (k - h > 0) && (t.A[i + (k + 1)][j + (k + 1)] == 1))
							{
								p.x = i;
								p.y = j;
								return p;
							}
							else if ((t.A[i + k][j - k] == 2) && (i + k < 8) && (j - k > 0) && (t.A[i + (k - h)][j - (k - h)] == 1) && (t.A[i][j] == 0) && (t.A[i + 1][j - 1] == 1) && (k - h > 0) && (t.A[i + (k + 1)][j - (k - 1)] == 1))
							{
								p.x = i;
								p.y = j;
								return p;
							}
						}
		}
		else
		{
			cout << "t.whoªº­Èµ¹¿ù¤F" << endl;
			p.x = 8;
			p.y = 8;
			return p;
		}
	}
}