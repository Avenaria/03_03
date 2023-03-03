#include "function.h"
#include <iostream>
using namespace std;
//4. В файле prog.cpp нужно :
//a) в функции main вызвать все функции через переозначеные(обобщенные) имена из файла function.h
//(show());
//b) определить константу, которая указывает какой тип
//данных будет использоваться.Например INTEGER —
//целые данные, CHAR — символьные DOUBLE —
//настоящие(#define INTEGER).
//Имя функциям нужно давать так, чтобы они отвечали своей сути.Например функция для вывода значений массива целых чисел на консоль — ShowArrayInt().
//А, когда переопределяем функцию с помощью #define то
//нужно давать общее имя.Например #define ShowArray
//ShowArrayInt.

#define INTEGER

int main()

{
	const int  m = 10;
	int arr[m];
	Add(arr, m);
	Show(arr, m);
	
	
  
}
