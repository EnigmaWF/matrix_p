// matrix_p.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //отображение русского языка в консоли
	int i, j;//счетчики
	int** arr;//двумерный массив
	int p = 0;//произведение
	int n, m;
	cout << "Введите размерность матрицы\n";
	cin >> n >> m;

	arr = (int**)malloc(n * sizeof(int*));

	cout << "Введите массив\n";
	for (i = 0; i < n; i = i + 1)
	{
		arr[i] = (int*)malloc(m * sizeof(int));
		for (j = 0; j < m; j = j + 1)
		{
			cout << "[" << i << "," << j << "] ";
			cin >> arr[i][j];//*(*(a+i)+j)
		}

	}


	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (arr[i][j] > 0)
			{
				if (p == 0)
					p = 1;
				p *= arr[i][j];
			}
		}
		if (p != 0)
			cout << "произведение столбца " << j << " равно " << p << "\n";
		else
			cout << "в столбце " << j << " нет положительных элементов\n";
		p = 0;
	}
	free(arr);
}
