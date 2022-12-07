#include "stdafx.h"
#include "T_Box.h"

#define T_BOX_SIZE 5

void PrintTBoxInfo(T_Box* p);

int main()
{
	srand(time(0));

	T_Box* tBox[T_BOX_SIZE] = { 0, };

	for (int i = 0; i < T_BOX_SIZE; i++)
	{
		int width = rand() % 36 + 5;
		int length = rand() % 36 + 5;
		tBox[i] = new T_Box(width, length);
	}

	for (int i = 0; i < T_BOX_SIZE; i++)
	{
		cout << "====" << i + 1 << "번째 BOX====" << endl;
		PrintTBoxInfo(tBox[i]);
		cout << "=================" << endl;
	}

	for (int i = 0; i < T_BOX_SIZE; i++)
	{
		SAFEDELETE_ONE(tBox[i]);
	}

	system("pause");	// 수업용
	return 0;
}

void PrintTBoxInfo(T_Box* p)
{
	cout << "가로 길이 : " << p->GetWidth() << endl;
	cout << "세로 길이 : " << p->GetLength() << endl;
	cout << "면적 : " << p->GetArea() << endl;;
	cout << "둘레 : " << p->GetPerimeter() << endl;
}
