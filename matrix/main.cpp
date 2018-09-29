#include <iostream>
using namespace std;

int main() {
	// на идеоне без констант работает
	const int M = 3;
	const int N = 3;
	int arr1[] = { 2,4,7 };

	//cin >>M>>N;
	int matrix1[M][N];
	int matrix2[M][N];
	//заполнение
	for (int i = 0; i<M; i++)
	{
		for (int j = 0; j<N; j++)
		{
			matrix1[j][i] = arr1[j];
		}
	}
	for (int i = 0; i<M; i++)
	{
		for (int j = 0; j<N; j++)
		{
			matrix2[j][i] = arr1[j];
		}
	}

	//сложение
	for (int i = 0; i<M; i++)
	{
		for (int j = 0; j<N; j++)
		{
			matrix1[i][j] += matrix2[i][j];
		}
	}
	//Модуль
	int res;

	res = matrix1[0][0] * matrix1[1][1] * matrix1[2][2] + matrix1[1][0] * matrix1[0][2] * matrix1[2][1]
		+ matrix1[0][2] * matrix1[0][1] * matrix1[1][2] - matrix1[0][2] * matrix1[1][1] * matrix1[2][0]
		- matrix1[0][1] * matrix1[0][2] * matrix1[1][2] - matrix1[0][0] * matrix1[1][2] * matrix1[2][0];




	cout << res;
	for (int i = 0; i<M; i++)
	{
		for (int j = 0; j<N; j++)
		{
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
