#include "stdafx.h"
#include "T_Box.h"

T_Box::T_Box(int width, int length)
{
	cout << "초기화 생성자가 호출되었습니다." << endl;
	_width = width;
	_length = length;
}

T_Box::~T_Box()
{
	cout << "소멸자가 호출되었습니다." << endl;
}

int T_Box::GetWidth()
{
	return _width;
}

int T_Box::GetLength()
{
	return _length;
}

int T_Box::GetArea()
{
	return _width * _length;
}

int T_Box::GetPerimeter()
{
	return 2 * (_width + _length);
}
