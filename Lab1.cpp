// Лабараторная работа 1. Павлюченко Михаил 221-352

#include <iostream>
#include <bitset>
using std::cout;
using std::cin;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "  > Задание 1. ФИО и номер группы: " << endl;
	cout << endl;
	cout << " Павлюченко Михаил Сергеевич. Группа 221-352 " << endl;
	cout << endl;


	cout << "  > Задание 2. Максимальные и минимальные значения встроенных типов данных и их размер: " << endl;

	cout << endl;
	cout << " max int= " << INT_MAX << " min int = " << INT_MIN << " int size= " << sizeof(int) << endl;
	cout << endl;
	cout << " max uint= " << UINT_MAX << " min uint= " << 0 << " uint size= " << sizeof(unsigned int) << endl;
	cout << endl;
        cout << " max short= " << SHRT_MAX << " min short= " << SHRT_MIN << " short size= " << sizeof(short) << endl;
	cout << endl;
	cout << " max ushort= " << USHRT_MAX << " min ushort= " << 0  << " ushort size= " << sizeof(unsigned short) << endl;
	cout << endl;
	cout << " max long= " << LONG_MAX << " min long= " << LONG_MIN << " long size= " << sizeof(long) << endl;
	cout << endl;
	cout << " max long long= " << LLONG_MAX  << " min long long= " << LLONG_MIN << " long long size= " << sizeof(long long) << endl;
	cout << endl;
	cout << " max double= " << DBL_MAX << " min double= " << DBL_MIN  << " size of double= " << sizeof(double) << endl;
	cout << endl;
	cout << " max char= " << CHAR_MAX << " min char= " << CHAR_MIN << " char size= " << sizeof(char) << endl;
	cout << endl;
	cout << " max bool= " << true << " min bool= " << false  << " size bool= " << sizeof(bool) << endl;
	cout << endl;

	cout << "  > Задание 3. Вывести введенное число в 2-ом, 16-ом виде: " << endl;
	cout << endl;
	int c;
	cout << " Введите число: ";
	cin >> c;
	cout << " Bin: 0b" << std::bitset<8 * sizeof(c)>(c) << endl;
	cout << " Hex: 0x" << std::hex << c << endl;
	cout << endl;
	cout << " Результаты преобразования типов ко всем встроенным: ";
        cout << endl;
	cout << " Bool: " << bool(c) << endl;
	cout << " Double: " << double(c) << endl;
	cout << " Char: " << char(c) << endl;
	cout << endl;

	cout << "  > Задание 4. Решение уравнения вида: a*x=b: " << endl;
	cout << endl;
	int a, b;
	cout << " Введите значение для a и b: ";
	cin >> a >> b;
	cout << a << "*x=" << b << endl;
	cout << "x=" << b << '/' << a << endl;
	cout << "x=" << double(b) / a << endl;
	cout << endl;
	
	cout << "  > Задание 5. Нахождение середины отрезка для заданных координат " << endl;
	cout << endl;
	int x1, x2;
	cout << " Введите координаты концов отрезка: ";
	cin >> x1 >> x2;
	cout << endl;
	cout << " Координата середины отрезка: " << double(x1 + x2) / 2 << endl;

	return 0;
}
