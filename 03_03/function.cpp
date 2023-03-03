using namespace std;
#include "function.h"
#include "function.h"
#include <iostream>
//2. В файле function.cpp необходимо написать следующие
//функции для работы с массивом данных :
//a) функцию для заполнения массива случайными значениями;
void AddArrayInt(int* arr, int size ){
	srand(time(0));
	for (int i{ 0 }; i < size; i++) {
		arr[i] = rand() % 11;
	}
}
void AddArrayDouble(double* arr, int size){
	srand(time(0));
	for (int i{ 0 }; i < size; i++) {
		arr[i] = rand() % 11+(double)(rand()%100)/100;
	}
}
void AddArrayChar(char* arr, int size){
	srand(time(0));
	for (int i{ 0 }; i < size; i++) {
		arr[i] = 32+rand() % 255;
	}
}
//b) функцию для вывода значений массива на консоль;
void ShoWArreyInt(int* arr, int size){
	for (int i{ 0 }; i < size; i++) {
		cout << arr[i];
	}
}
void ShoWArreyDouble(double* arr, int size){
	for (int i{ 0 }; i < size; i++) {
		cout << arr[i];
	}
}
void ShoWArreyChar(char* arr, int size){
	for (int i{ 0 }; i < size; i++) {
		cout << arr[i];
	}
}
//c) функцию для поиска минимального элемента;
int FindMinArray(int* arr, int size) {
	int min = arr[0];
	for (int i{ 0 }; i < size; i++) {
		if (min > arr[i])min = arr[i];
	}
	return min;

}
double FindMinDoubl(double* arr, int size) {
	 double min = arr[0];
	for (int i{ 0 }; i < size; i++) {
		if (min > arr[i])min = arr[i];
	}
	return min;
}
char FindMinChar(char* arr, int size) {
	int min = arr[0];
	for (int i{ 0 }; i < size; i++) {
		if (min > arr[i])min = arr[i];
	}
	return min;

}
//d)функцию для поиска максимального элемента;
//int FindMinArray(int* arr, int size) {
//	int max = arr[0];
//	for (int i{ 0 }; i < size; i++) {
//		if (max > arr[i])max = arr[i];
//	}
//	return max;
//
//}
//double FindMinDoubl(double* arr, int size) {
//	double max = arr[0];
//	for (int i{ 0 }; i < size; i++) {
//		if (max > arr[i])max = arr[i];
//	}
//	return max;
//}
//char FindMinChar(char* arr, int size) {
//	int max = arr[0];
//	for (int i{ 0 }; i < size; i++) {
//		if (max > arr[i])max = arr[i];
//	}
//	return max;
//
//}

//e) функцию для сортировки;
void SortArrayInt(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[i]>arr[ j + 1 ]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void SortArrayDouble(double* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[i] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void SortArrayChar(char* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[i] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}


//f) функцию для редактирования значения массива.
void UpdateArrayInt(int* arr, int size, int val, int index){
	if( index< size &&  index>=0)arr[index] = val;
}
void UpdateArrayDouble(double* arr, int size, int val, int index){
	if (index < size && index >= 0)arr[index] = val;
}
void UpdateArrayChar(char* arr, int size, int val, int index){
	if (index < size && index >= 0)
		if(val<=255 && val >=32)arr[index] = val;
}
//Данные функции необходимо написать для работы
//с массивом целых, действительных и символьных
//значений. (Для каждого типа написать отдельную
//	функцию).

