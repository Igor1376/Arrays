#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define BIN
//#define BIN2

void main()
{
	setlocale(LC_ALL, "");
#ifdef BIN
	int decimal; // ���������� �����
	cout << "������� ���������� �����: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {}; // ���� ������ ����� ������� ������� ��������� �����
	int i = 0;
	//while (decimal > 0)
	//{
	//	bin[i] = decimal % 2; // �������� ������� ������ ��������� �����
	//	i++; // ��������� � ���������� �������
	//	decimal = decimal / 2; // ������� ������� �������� ������ �� �����
	//}
	// for (start; stop; step)
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
#endif // BIN

#ifdef BIN2
	int decimal;
	cout << "������� ���������� �����: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	/*while (decimal > 0);
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}*/
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
#endif // BIN2

#ifdef BIN3
	int decimal;
	cout << "������� �������� �����: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2)
		for (--i; i >= 0; i--)
		{
			cout << bin[i];
		}
	cout << endl;
#endif // BIN3

#ifdef BIN4
	int decimal;
	cout << "������� �������� �����: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2)
		for (--i; i >= 0; i--)
		{
			cout << bin[i];
		}
	cout << endl;
#endif // BIN4

#ifdef BIN5
	int decimal;
	cout << "������� �������� �����: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2)
		for (--i; i >= 0; i--)
		{
			cout << bin[i];
		}
	cout << endl;
#endif // BIN5

#ifdef DEBUG
	int decimal;
	cout << "������� �������� �����: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};
	int i = 0;
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2)
		for (--i; i >= 0; i--)
		{
			cout << bin[i];
		}
	cout << endl;
#endif // DEBUG


}