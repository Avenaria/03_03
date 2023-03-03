#pragma once
#include "function.h"
#include <iostream>
//3. � ����� function.h ����� :

//b) ������� �������� ���������� �� ���������, ����������� �� ��� ������(#ifdef INTEGER);



//c) ������� ���������� ����� �������, ������� ����� ���������� ������� ���������������� ���� �
//����������� �� ���������, ��������� � ����� prog.
//cpp(# define show ShowInt).
//#if//�������� �������
//#ifdef//�������� �� ������������� ��������� 
//#ifndef   //�������� �� �� ������������ ��������� ( ���� � ��� ���������� ������)
#define INTEGER
#ifdef INTEGER
#define Add(arr,s)AddArrayInt( arr, s);
#define Show(arr,s)ShoWArreyInt( arr, s);
#define Update(arr,s)UpdateArrayInt( arr, s);
#define Sort(arr,s)UpdateArrayInt( arr, s);

#endif
#ifdef DOUDLE
#define Add(arr,s)AddArrayDouble( arr, s);
#define Show(arr,s)ShoWArreyDouble( arr, s);
#define Update(arr,s)UpdateArrayDouble( arr, s);
#define Sort(arr,s)UpdateArrayDouble( arr, s);

#endif

#ifdef CHAR
#define Add(arr,s)AddArrayChar( arr, s);
#define Show(arr,s)ShoWArreyChar( arr, s);
#define Update(arr,s)UpdateArrayChar( arr, s);
#define Sort(arr,s)UpdateArrayChar( arr, s);

#endif
//a) ������� ��������� ���� �������;
void AddArrayInt(int* arr, int size);
void ShoWArreyInt(int* arr, int size);
void UpdateArrayInt(int* arr, int size, int val, int index);
void SortArrayInt(int* arr, int size);
void UpdateArrayInt(int* arr, int size, int val, int index);

void AddArrayDouble(double* arr, int size);
void ShoWArreyDouble(double* arr, int size);
void UpdateArrayDouble(double* arr, int size, int val, int index);
void SortArrayDouble(double* arr, int size);
void UpdateArrayDouble(double* arr, int size, int val, int index);


void AddArrayChar(char* arr, int size);
void ShoWArreyChar(char* arr, int size);
void UpdateArrayChar(char* arr, int size, int val, int index);
void SortArrayChar(char* arr, int size);
void UpdateArrayChar(char* arr, int size, int val, int index);
