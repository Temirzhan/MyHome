#pragma once
using namespace std;
//1. ������� ����� Date.
class Date
{
private:
	//2. � �������� ������� ���������� ���������� ��� �������� ������� � ��������� �������(�������������).
	__int64 second;
	int day, month, year;
public:
	//3. ������� ����������� �� ���������.
	Date();
	//4. �������� ����������� ��� ����� ���� � ���� Date(����, �����, ���).
	Date(int day, int month, int year);
	//����������� �����������
	Date(const Date &time);
	//5. ������� �����, �� ������������ ��������, ��� ��������� �������� ���������� �������.
	void second_Time();
	//6. �������� ����� ��� ������ � ������� ������� � ���� ��.��.����.
	//void out_Time();
	//7. ����������� �������� ���������, ��� ����������� �������� ���� ���.������������ ���������� ����.
	int operator-(Date time);
	//8. ����������� �������� �������� ��� ���������� ���� �� ������������ ���������� ����.
	//Date operator+(int days);
	////9. ����������� �������� ������������ �������� ��� ���������� ���� �� ������������ ���������� ����.
	//void operator+=(int days);
	////������������� �������� ������������
	Date operator=(const Date time);
};
