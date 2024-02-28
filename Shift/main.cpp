#include<Windows.h>
#include<iostream>
using namespace std;
using std::cin;
using std::cout;

//#define SHIFT
//#define SHIFT1
//#define SHIFT2
//#define SHIFT3
//#define SHIFT4
//#define SHIFT5

void main()
{
	setlocale(LC_ALL, "");
#ifdef SHIFT
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS"); // функция system () вызывает любую команду Windows
		// команда CLS clear screen очищает окно консоли

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000); // функция sleep () приостанавливает выполнение программы на заданный промежуток времени
		// промежуток времени задается в миллисекундах.
	}
#endif // SHIFT

#ifdef SHIFT1
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "Введите на сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	system("CLS");
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	Sleep(1000);
	}
#endif // SHIFT1

#ifdef SHIFT2
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shift;
	cout << "Введите на сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	system("CLS");
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	Sleep(1000);
	}
#endif // SHIFT2

#ifdef SHIFT3
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{

		int buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // SHIFT3

#ifdef SHIFT4
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shift;
	cout << "Введите значение на какое выполнить смещение массива: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		cout << endl;
		system("CLS");

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // SHIFT4

#ifdef SHIFT5
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{

		int buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
#endif // SHIFT5
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{

	int buffer = arr[0];
	for (int i = 0; i < n - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = buffer;
	}
	system("CLS");
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	Sleep(1000);


}