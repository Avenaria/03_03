using namespace std;
#include "function.h"
#include "function.h"
#include <iostream>
//2. � ����� function.cpp ���������� �������� ���������
//������� ��� ������ � �������� ������ :
//a) ������� ��� ���������� ������� ���������� ����������;
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
//b) ������� ��� ������ �������� ������� �� �������;
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
//c) ������� ��� ������ ������������ ��������;
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
//d)������� ��� ������ ������������� ��������;
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

//e) ������� ��� ����������;
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


//f) ������� ��� �������������� �������� �������.
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
//������ ������� ���������� �������� ��� ������
//� �������� �����, �������������� � ����������
//��������. (��� ������� ���� �������� ���������
//	�������).

