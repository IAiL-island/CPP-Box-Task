#pragma once

class T_Box
{
	int _width;
	int _length;

public:

	T_Box(int width, int length);	// 持失切
	~T_Box(); // 社瑚切

	int GetWidth();
	int GetLength();
	int GetArea();
	int GetPerimeter();
};