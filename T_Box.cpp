#include "stdafx.h"
#include "T_Box.h"

T_Box::T_Box(int width, int length)
{
	cout << "�ʱ�ȭ �����ڰ� ȣ��Ǿ����ϴ�." << endl;
	_width = width;
	_length = length;
}

T_Box::~T_Box()
{
	cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl;
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
