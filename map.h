#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
using namespace std;
enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 � ������
1 � �����
2 � �������
3 � �������
4 � �������
5 � �������
6 � ������
7 � �����
8 � �����
9 � ����� - �����
A � ������ - �������
B � ������ - �������
� � ������ - �������
E � ������ - ������
F � ���� - �����
system("color F0");*/  // ��������� ������ ���� � ������� ������
class card
{
public:
	void cont_compl()
	{
		vector <string> austr_cit = { "��������", "��������", "����", "�������", "������", "������", "������", "��������" }, cit_of_new_zeal = { "������", "����������", "����������", "���������", "�������", "��������", "����������-����", "���������", "�������", "������", "�������", "���-������", "��������", "������������", "��������", "�������" }, cit_of_south_afr = { "��������", "��������", "����", "��������������", "�����������", "��������", "������������", "��������", "���������" }, can_cit = { "whitehorse", "yellowknife", "iqaluit" }, amer_cit = { "�����", "��-����", "����������", "�����", "������", "����-���", "������", "�������", "����������", "�������", "�������", "��������", "�����", "�������", "��������", "����������", "������������", "����������", "������", "���������", "������", "��������", "�����-���", "������", "����-���", "�������", "����������-����", "�������", "������", "������", "���������", "��������", "������-����", "�������", "�������", "������", "�����-��", "��������", "��������-����", "������", "����������", "���������", "�������", "����", "�������", "�����", "����������", "����", "��������", "����-����-����" };
		multimap <string, vector <string>> cities;
	}
	void output()
	{
		vector <string> austr_cit = { "��������", "��������", "����", "�������", "������", "������", "������", "��������" }, cit_of_new_zeal = { "������", "����������", "����������", "���������", "�������", "��������", "����������-����", "���������", "�������", "������", "�������", "���-������", "��������", "������������", "��������", "�������" }, cit_of_south_afr = { "��������", "��������", "����", "��������������", "�����������", "��������", "������������", "��������", "���������" }, can_cit = { "whitehorse", "yellowknife", "iqaluit" }, amer_cit = { "�����", "��-����", "����������", "�����", "������", "����-���", "������", "�������", "����������", "�������", "�������", "��������", "�����", "�������", "��������", "����������", "������������", "����������", "������", "���������", "������", "��������", "�����-���", "������", "����-���", "�������", "����������-����", "�������", "������", "������", "���������", "��������", "������-����", "�������", "�������", "������", "�����-��", "��������", "��������-����", "������", "����������", "���������", "�������", "����", "�������", "�����", "����������", "����", "��������", "����-����-����" };
		multimap <string, vector <string>> cities;
		auto towns = cities.insert(make_pair("���������", austr_cit));
		cities.insert({ { "new zealand", cit_of_new_zeal }, { "south africa", cit_of_south_afr }, { "canada", can_cit }, { "america", amer_cit } });
		SetColor(1, 0);
		cout << towns->first << endl;
		int x = 0;//������ ������� ������� ������������ �������
		while (x < 8)
		{
			SetColor(2, 0);
			cout << towns->second[x] << endl;
			x++;
		}
		cout << endl;
		towns = cities.insert(make_pair("����� ��������", cit_of_new_zeal));
		SetColor(3, 0);
		cout << towns->first << endl;
		x = 0;//������ ������� ������� �������������� �������
		while (x < 16)
		{
			SetColor(4, 0);
			cout << towns->second[x] << endl;
			x++;
		}
		cout << endl;
		towns = cities.insert(make_pair("����� ������", cit_of_south_afr));
		SetColor(5, 0);
		cout << towns->first << endl;
		x = 0;//������ ������� ������� ��������������� �������
		while (x < 9)
		{
			SetColor(6, 0);
			cout << towns->second[x] << endl;
			x++;
		}
		cout << endl;
		towns = cities.insert(make_pair("������", can_cit));
		SetColor(7, 0);
		cout << towns->first << endl;
		x = 0;//������ ������� ������� ��������� �������
		while (x < 3)
		{
			SetColor(8, 0);
			cout << towns->second[x] << endl;
			x++;
		}
		cout << endl;
		towns = cities.insert(make_pair("�������", amer_cit));
		SetColor(9, 0);
		cout << towns->first << endl;
		x = 0;//������ ������� ������� ������������ �������
		while (x < 50)
		{
			SetColor(10, 0);
			cout << towns->second[x] << endl;
			x++;
		}
		cout << endl;
	}
	void capital()
	{
		multimap <string, string> austr_cap, cap_of_new_zeal, cap_of_south_afr, can_cap, amer_cap;
		auto capital_1 = austr_cap.insert(make_pair("australia", "canberra")), capital_2 = cap_of_new_zeal.insert(make_pair("new_zealand", "wellington")), capital_3 = cap_of_south_afr.insert(make_pair("south_africa", "pretoria")), capital_4 = can_cap.insert(make_pair("canada", "ottawa")), capital_5 = amer_cap.insert(make_pair("america", "washington"));
		string country;
		SetColor(11, 0);
		cout << "enter country" << endl;
		cin >> country;
		SetColor(12, 0);
		if (country == capital_1->first) cout << capital_1->second << endl << endl;
		else if (country == capital_2->first)
		{
			SetColor(13, 0);
			cout << capital_2->second << endl << endl;
		}
		else if (country == capital_3->first)
		{
			SetColor(14, 0);
			cout << capital_3->second << endl << endl;
		}
		else if (country == capital_4->first)
		{
			SetColor(15, 0);
			cout << capital_4->second << endl << endl;
		}
		else if (country == capital_5->first) cout << capital_5->second << endl << endl;
		else cout << "you need to find info about the capital of this country in another list" << endl << endl;
	}
	void city()
	{
		vector <string> austr_cit = { "��������", "��������", "����", "�������", "������", "������", "������", "��������" }, cit_of_new_zeal = { "������", "����������", "����������", "���������", "�������", "��������", "����������-����", "���������", "�������", "������", "�������", "���-������", "��������", "������������", "��������", "�������" }, cit_of_south_afr = { "��������", "��������", "����", "��������������", "�����������", "��������", "������������", "��������", "���������" }, can_cit = { "whitehorse", "yellowknife", "iqaluit" }, amer_cit = { "�����", "��-����", "����������", "�����", "������", "����-���", "������", "�������", "����������", "�������", "�������", "��������", "�����", "�������", "��������", "����������", "������������", "����������", "������", "���������", "������", "��������", "�����-���", "������", "����-���", "�������", "����������-����", "�������", "������", "������", "���������", "��������", "������-����", "�������", "�������", "������", "�����-��", "��������", "��������-����", "������", "����������", "���������", "�������", "����", "�������", "�����", "����������", "����", "��������", "����-����-����" };
		multimap <string, vector <string>> cities;
		string city;
		cout << "������� �����" << endl;
		cin >> city;
		auto towns = cities.insert(make_pair("���������", austr_cit));
		int x = 0;//������ ������� ������� ������������ �������
		while (x < 8)
		{
			if (city == towns->second[x]) cout << towns->first;
			x++;
		}
		towns = cities.insert(make_pair("����� ��������", cit_of_new_zeal));
		x = 0;//������ ������� ������� �������������� �������
		while (x < 16)
		{
			if (city == towns->second[x]) cout << towns->first;
			x++;
		}
		towns = cities.insert(make_pair("����� ������", cit_of_south_afr));
		x = 0;//������ ������� ������� ��������������� �������
		while (x < 9)
		{
			if (city == towns->second[x]) cout << towns->first;
			x++;
		}
		towns = cities.insert(make_pair("������", can_cit));
		x = 0;//������ ������� ������� ��������� �������
		while (x < 3)
		{
			if (city == towns->second[x]) cout << towns->first;
			x++;
		}
		towns = cities.insert(make_pair("�������", amer_cit));
		x = 0;//������ ������� ������� ������������ �������
		while (x < 50)
		{
			if (city == towns->second[x]) cout << towns->first;
			x++;
		}
	}
};