#pragma once

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

#include <Windows.h>    // ¼ö¾÷¿ë

using namespace std;

#define SAFEDELETE_ONE(p)       {if(p){delete (p); (p) = NULL;}}
#define SAFEDELETE_ARRAY(p)     {if(p){delete[] (p); (p) = NULL;}}
