#pragma once

class T_Box
{
	int _width;
	int _length;

public:

	T_Box(int width, int length);	// ������
	~T_Box(); // �Ҹ���

	int GetWidth();
	int GetLength();
	int GetArea();
	int GetPerimeter();
};