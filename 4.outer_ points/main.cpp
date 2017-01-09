#include <iostream>
using namespace std;
void  outer_points(int n, int m) 
{
	int *start = new int[n]; // начало отрезка
	int *konec = new int[n]; // конец отрезка
	for (int i = 0; i < n; i++)
	{
		cin >> start[i] >> konec[i];
	}
	for (int i = 0; i < m; i++)
	{
		int to4ka, kolvo = 0;
		cin >> to4ka;
		for (int k = 0; k < n; k++) 
		{
			if (to4ka <= konec[k] && to4ka >= start[k])
			{
				kolvo = kolvo + 1;
			}
		}
		cout << n - kolvo << " ";
	}
}
int main()
{
	int n, m;
	cin >> n >> m;
	outer_points(n, m);
	system("pause");
	return 0;
}
