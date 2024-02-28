#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define HOMEWORK
//#define HOMEWORK1
//#define HOMEWORK2
//#define HOMEWORK3

void main()
{
	setlocale(LC_ALL, "");
#ifdef HOMEWORK
	//cout << "Hello Arrays" << endl;
	//cout << "Введите размер массива: ";
	////const int SIZE = 5;
	////int arr[SIZE];
	////cout << "Введите " << SIZE << "Элементов массива:\n";

	//for (int i = 0; i < SIZE; i++)
	//{
	//	//cin >> arr[i];
	//}
	//cout << "Элементы массива:\n";
	//for (int i = 0; i < SIZE; i++)
	//{
	//	//cout << arr[i] << "\t";
	//}

	/*cout << "Hello Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE] = {3, 5, 8, 10, 15};
	cout << int() << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/

	// -=*ввести значения элементов массива с клавиатуры*=-
	/*cout << "Введите размер массива: " << "\n";
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << "Элементы массива: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}*/

	// -=*Вывод элементов массива на экран в прямом порядке*=-
	/*const int SIZE = 5;
	int arr[SIZE];
	cout << "Элементы массива в прямом порядке:" << endl;
	for (int i = 0; i < SIZE; ++i) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	// -=*Вывод элементов массива на экран в обратном порядке*=-
	//cout << "Элементы массива в обратном порядке:" << endl;
	//const int SIZE = 5;
	//int arr[SIZE];
	//for (int i = SIZE - 1; i >= 0; --i) {
	//	cout << arr[i] << " ";
	//}
	//cout << endl;

	// -=*Вычисление суммы элементов массива*=-
	//int sum = 0;
	//const int SIZE = 5;
	//int arr[SIZE];
	//for (int i = 0; i < SIZE; ++i) {
	//	sum += arr[i];
	//}
	//// Вывод суммы элементов массива
	//cout << "Сумма элементов массива: " << sum << endl;

	// -=*Нахождение минимального и максимального значений*=-
	//const int SIZE = 5;
	//int arr[SIZE];
	//int min = arr[0];
	//int max = arr[0];
	//for (int i = 1; i < SIZE; ++i) 
	//{
	//	if (arr[i] < min) 
	//	{
	//		min = arr[i];
	//	}
	//	if (arr[i] > max) 
	//	{
	//		max = arr[i];
	//	}
	//}
	// Вывод минимального и максимального значений
	//cout << "Минимальное значение: " << min << endl;
	//cout << "Максимальное значение: " << max << endl;
	//-----------------------------------------------------------------------------------
	cout << "Введите элементы массива: ";
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout<< arr[i] << "\t";
	}
	// вывод в обратном порядке
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}

	//Вычисление суммы элементов массива
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумму элементов массива: " << sum << endl;
	cout << "Среднее-арифметическое элементов массива: " << (double)sum / SIZE << endl;

	// поиск минимального и максимального значения
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if(arr[i] < min)min = arr[i];
		if(arr[i] > max)max = arr[i];
	}
	cout << "Минимальное" << min << endl;
	cout << "Максимальное" << max << endl;
#endif
#ifdef HOMEWORK1
	cout << "Введите число с клавиатуры: " << endl;
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в обратном порядке: " << endl;
	for (int i = SIZE-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение: " << min << endl;
	cout << "Максимальное значение: " << max << endl;
#endif
#ifdef HOMEWORK2
	cout << "Введите значение элементов массива с клавиатуры: " << endl;
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива в прямом порядке: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << sum << "\t";
	cout << "Среднее арифметическое: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение: " << min << endl;
	cout << "максимальное значение: " << max << endl;
#endif
#ifdef HOMEWORK3
	cout << "Введите значение элементов: " << endl;
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Значение элементов в прямом порядке: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Значение элементов в обратном порядке: " << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение элемента массива: " << min << endl;
	cout << "Максимальное значение элемента массива: " << max << endl;
#endif
}