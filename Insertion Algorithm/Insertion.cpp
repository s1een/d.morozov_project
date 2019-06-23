/**
* @file Insertion.cpp
* @author ������� �.�., ��. 515�
* @date 23 ���� 2019
* @brief ������������ �������
*
* ��������� ���������� ����������.  ���������� ���������.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
// ��������� �������
void rand_array(int[], int);
void person_array(int[], int);
void sort(int[], int);
// Main
int main(void) {
	int n, v, result = 0;
	int array[15];
	printf("***The program for sorting an array of insertion algorithm.***\n");
	printf("Enter the number of elements in the array (Max 15) > ");
	scanf_s("%d", &n);
	// �������� �� ������������ ������
	if (n > 15 || n <= 0)
	{
		printf("Error, try again.");
		_getch();
		return 1;
	}
	// ������ ���������� ������
	printf("Functions:\n> 0.Random Array.\n> 1.Keyboard input.\n> ");
	scanf_s("%d", &v);
	if (v == 0)
		rand_array(array, n);
	else if (v == 1)
		person_array(array, n);
	// �������� �� ������������
	else
	{
		printf("Error!(Select 0 or 1)\n");
		_getch();
		return 1;
	}
	sort(array, n);
	// ����� ���������������� �������
	printf("Your Sorted array > ");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	_getch();
	return 0;
}
/**
* ���������� ������� �������������
*
* @param array[] - ������ �����
* @param n - ���������� ���������� �������
* @return - Nothing
* @
*/
void rand_array(int array[], int n) {
	srand(time(NULL));
	printf("Your Random Array > ");
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 201 - 100;
		printf("%d ", array[i]);
	}
	printf("\n");
}
/**
* ���������� ������� �������������
*
* @param array[] - ������ �����
* @param n - ���������� ���������� �������
* @return - Nothing
* @
*/
void person_array(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Enter the %d-st element of the array > ", i + 1);
		scanf_s("%d", &array[i]);
	}
	printf("Your Person Array > ");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
/**
* ���������� ���������
*
* @param array[] - ������ �����
* @param n - ���������� ���������� �������
* @param t - ����������, � �� ������� ������ ������� array[j - 1] � array[j]
* @return - Nothing
* @
*/
void sort(int array[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0 && array[j - 1] > array[j]; j--) {
			int t;
			t = array[j - 1];
			array[j - 1] = array[j];
			array[j] = t;
		}
	}
}