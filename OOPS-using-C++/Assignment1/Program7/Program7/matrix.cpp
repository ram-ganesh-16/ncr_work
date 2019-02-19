#include<iostream>
using namespace std;
#include<conio.h>
class Matrix
{
private:
	int a[3][3];
public:
	void getMatrix();
	void printMatrix();
	friend Matrix Multiply(Matrix A, Matrix B);
};
void Matrix::getMatrix()
{
	cout << "Enter the Matrix one by one\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
}
void Matrix::printMatrix()
{
	cout << "Given Matrix is\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << "";
		}
		cout << "\n";
	}
}
Matrix Multiply(Matrix A, Matrix B)
{
	Matrix T;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			T.a[i][j] = 0;
			for (int k = 0; k < 3; k++)
			{
				T.a[i][j] = T.a[i][j] + A.a[i][k] * B.a[k][j];
			}
		}
	}
	return T;
}
int main()
{
	Matrix P, Q, R;
	P.getMatrix();
	Q.getMatrix();
	R = Multiply(P, Q);
	R.printMatrix();
	system("pause");
	return 0;
}