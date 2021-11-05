// Варіант 6(Рекурсивний спосіб)
#include <iostream>
using namespace std;

void InitArray(int b[], const int size, int i)
{
	if (i < size)
	{
		b[i] = -40 + rand() % 91;
		InitArray(b, size, i + 1);
		return;
	}
}

void PrintArray(int b[], const int size, int i)
{
	if (i < size)
	{
		if (i == 0)
			cout << "{";
		cout << b[i];
		if (i != size - 1)
			cout << ", ";
		else cout << "}" << endl;
		PrintArray(b, size, i + 1);
		return;
	}
}

int SumArray(const int* const b, const int size, int i)
{
	if (i < size)
	{
		if (!(b[i] % 5 == 0 && b[i] > 0))
			return b[i] + SumArray(b, size, i + 1);
		else
			return SumArray(b, size, i + 1);
	}
	else return 0;
}

int CountElementArray(int const* const b, const int size, int i)
{
	if (i < size)
	{
		if (!(b[i] % 5 == 0 && b[i] > 0))
			return 1 + CountElementArray(b, size, i + 1);
		else
			return CountElementArray(b, size, i + 1);
	}
	else return 0;
}

void ReplaceElementArray(int b[], const int size, int i)
{
	if (i < size)
	{
		if (!(b[i] % 5 == 0 && b[i] > 0))
			b[i] = 0;
		ReplaceElementArray(b, size, i + 1);
		return;
	}
}

int main()
{
	srand(time(0));
	const int size = 22;
	int b[size];

	InitArray(b, size, 0);
	PrintArray(b, size, 0);
	cout << "Array sum by condition = " << SumArray(b, size, 0) << endl;
	cout << "Count element by condition = " << CountElementArray(b, size, 0) << endl;
	ReplaceElementArray(b, size, 0);
	PrintArray(b, size, 0);

	return 0;
}