﻿#include "tasks.h"

/*	Task 01. Chess Cage [шахматная клетка/поле]
*
*	Даны координаты клетки/поля шахматной доски x и y (положительные целые числа, 
*	лежащие в диапазоне от 1 до 8). 
*	Учитывая, что левое нижнее поле доски с координатами (1,1) является чёрным, определите,
*	являются ли заданные координаты (x, y) координатами чёрной клетки/поля.
*
*	Примечание
*	1) Чтобы увидеть решение и разработать алгоритм, нарисуйте себе шахматную доску
*	и поставьте в клетках соответствующие координаты x и y.
*	2) Не забудьте про "защиту от дурака". Если пользователь задаёт неверные коориднаты клеток,
*	то функция должна возвратить булевское значение false.
*	3) Для решения достаточно встроенных в язык арифметических операций, операций отношения 
*	и логических операций.
* 
*	Формат входных данных [input]
*	Функция принимает на вход два целочисленных значения (при корректных данных - от 1 до 8),
*	задающие номер столбца и номер строки клетки (x, y), где x - координата по горизонтали,
*	а y - координата по вертикали.
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - результат решения.
*
*	[ input 1]: 1 2
*	[output 1]: false
*
*	[ input 2]: 1 1
*	[output 2]: true
*/

bool task01(int x, int y) {
	return (x >= 1 && x <= 8) && (y >= 1 && y <= 8) ? ((x + y) % 2 == 0 ? true : false) : false;
}