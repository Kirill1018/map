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
/*0 Ч черный
1 Ч синий
2 Ч зеленый
3 Ч голубой
4 Ч красный
5 Ч лиловый
6 Ч желтый
7 Ч белый
8 Ч серый
9 Ч свело - синий
A Ч светло - зеленый
B Ч светло - голубой
— Ч светло - красный
E Ч светло - желтый
F Ч €рко - белый
system("color F0");*/  // ”становка белого фона и черного текста
class card
{
public:
	void cont_compl()
	{
		vector <string> austr_cit = { "канберра", "мельбурн", "перт", "брисбен", "сидней", "дарвин", "хобарт", "аделаида" }, cit_of_new_zeal = { "окленд", "веллингтон", "крайстчЄрч", "гамильтон", "данидин", "тауранга", "палмерстон-норт", "хейстингс", "нельсон", "нейпир", "роторуа", "нью-плимут", "фангареи", "инверкаргилл", "уонгануи", "гисборн" }, cit_of_south_afr = { "кейптаун", "кимберли", "бишо", "питермарицбург", "блумфонтейн", "мафикенг", "йоханнесбург", "нелспрЄйт", "полокване" }, can_cit = { "whitehorse", "yellowknife", "iqaluit" }, amer_cit = { "бойсе", "де-мойн", "монтгомери", "джуно", "финикс", "литл-рок", "шайенн", "олимпи€", "монтпилиер", "ричмонд", "мадисон", "гонолулу", "довер", "атланта", "чарлстон", "спрингфилд", "индианаполис", "сакраменто", "топика", "франкфорт", "денвер", "хартфорд", "батон-руж", "бостон", "сент-пол", "джэксон", "джефферсон-сити", "лансинг", "хелена", "огаста", "аннаполис", "линкольн", "карсон-сити", "конкорд", "трентон", "олбани", "санта-фе", "колумбус", "оклахома-сити", "сейлем", "гаррисберг", "провиденс", "бисмарк", "роли", "нашвилл", "остин", "таллахасси", "пирр", "колумби€", "солт-лейк-сити" };
		multimap <string, vector <string>> cities;
	}
	void output()
	{
		vector <string> austr_cit = { "канберра", "мельбурн", "перт", "брисбен", "сидней", "дарвин", "хобарт", "аделаида" }, cit_of_new_zeal = { "окленд", "веллингтон", "крайстчЄрч", "гамильтон", "данидин", "тауранга", "палмерстон-норт", "хейстингс", "нельсон", "нейпир", "роторуа", "нью-плимут", "фангареи", "инверкаргилл", "уонгануи", "гисборн" }, cit_of_south_afr = { "кейптаун", "кимберли", "бишо", "питермарицбург", "блумфонтейн", "мафикенг", "йоханнесбург", "нелспрЄйт", "полокване" }, can_cit = { "whitehorse", "yellowknife", "iqaluit" }, amer_cit = { "бойсе", "де-мойн", "монтгомери", "джуно", "финикс", "литл-рок", "шайенн", "олимпи€", "монтпилиер", "ричмонд", "мадисон", "гонолулу", "довер", "атланта", "чарлстон", "спрингфилд", "индианаполис", "сакраменто", "топика", "франкфорт", "денвер", "хартфорд", "батон-руж", "бостон", "сент-пол", "джэксон", "джефферсон-сити", "лансинг", "хелена", "огаста", "аннаполис", "линкольн", "карсон-сити", "конкорд", "трентон", "олбани", "санта-фе", "колумбус", "оклахома-сити", "сейлем", "гаррисберг", "провиденс", "бисмарк", "роли", "нашвилл", "остин", "таллахасси", "пирр", "колумби€", "солт-лейк-сити" };
		multimap <string, vector <string>> cities;
		auto towns = cities.insert(make_pair("австрали€", austr_cit));
		cities.insert({ { "new zealand", cit_of_new_zeal }, { "south africa", cit_of_south_afr }, { "canada", can_cit }, { "america", amer_cit } });
		SetColor(1, 0);
		cout << towns->first << endl;
		int x = 0;//первый элемент вектора австралийсих городов
		while (x < 8)
		{
			SetColor(2, 0);
			cout << towns->second[x] << endl;
			x++;
		}
		cout << endl;
		towns = cities.insert(make_pair("нова€ зеланди€", cit_of_new_zeal));
		SetColor(3, 0);
		cout << towns->first << endl;
		x = 0;//первый элемент вектора новозеландских городов
		while (x < 16)
		{
			SetColor(4, 0);
			cout << towns->second[x] << endl;
			x++;
		}
		cout << endl;
		towns = cities.insert(make_pair("южна€ африка", cit_of_south_afr));
		SetColor(5, 0);
		cout << towns->first << endl;
		x = 0;//первый элемент вектора южноафриканских городов
		while (x < 9)
		{
			SetColor(6, 0);
			cout << towns->second[x] << endl;
			x++;
		}
		cout << endl;
		towns = cities.insert(make_pair("канада", can_cit));
		SetColor(7, 0);
		cout << towns->first << endl;
		x = 0;//первый элемент вектора канадских городов
		while (x < 3)
		{
			SetColor(8, 0);
			cout << towns->second[x] << endl;
			x++;
		}
		cout << endl;
		towns = cities.insert(make_pair("америка", amer_cit));
		SetColor(9, 0);
		cout << towns->first << endl;
		x = 0;//первый элемент вектора американских городов
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
		vector <string> austr_cit = { "канберра", "мельбурн", "перт", "брисбен", "сидней", "дарвин", "хобарт", "аделаида" }, cit_of_new_zeal = { "окленд", "веллингтон", "крайстчЄрч", "гамильтон", "данидин", "тауранга", "палмерстон-норт", "хейстингс", "нельсон", "нейпир", "роторуа", "нью-плимут", "фангареи", "инверкаргилл", "уонгануи", "гисборн" }, cit_of_south_afr = { "кейптаун", "кимберли", "бишо", "питермарицбург", "блумфонтейн", "мафикенг", "йоханнесбург", "нелспрЄйт", "полокване" }, can_cit = { "whitehorse", "yellowknife", "iqaluit" }, amer_cit = { "бойсе", "де-мойн", "монтгомери", "джуно", "финикс", "литл-рок", "шайенн", "олимпи€", "монтпилиер", "ричмонд", "мадисон", "гонолулу", "довер", "атланта", "чарлстон", "спрингфилд", "индианаполис", "сакраменто", "топика", "франкфорт", "денвер", "хартфорд", "батон-руж", "бостон", "сент-пол", "джэксон", "джефферсон-сити", "лансинг", "хелена", "огаста", "аннаполис", "линкольн", "карсон-сити", "конкорд", "трентон", "олбани", "санта-фе", "колумбус", "оклахома-сити", "сейлем", "гаррисберг", "провиденс", "бисмарк", "роли", "нашвилл", "остин", "таллахасси", "пирр", "колумби€", "солт-лейк-сити" };
		multimap <string, vector <string>> cities;
		string city;
		cout << "введите город" << endl;
		cin >> city;
		auto towns = cities.insert(make_pair("австрали€", austr_cit));
		int x = 0;//первый элемент вектора австралийсих городов
		while (x < 8)
		{
			if (city == towns->second[x]) cout << towns->first;
			x++;
		}
		towns = cities.insert(make_pair("нова€ зеланди€", cit_of_new_zeal));
		x = 0;//первый элемент вектора новозеландских городов
		while (x < 16)
		{
			if (city == towns->second[x]) cout << towns->first;
			x++;
		}
		towns = cities.insert(make_pair("южна€ африка", cit_of_south_afr));
		x = 0;//первый элемент вектора южноафриканских городов
		while (x < 9)
		{
			if (city == towns->second[x]) cout << towns->first;
			x++;
		}
		towns = cities.insert(make_pair("канада", can_cit));
		x = 0;//первый элемент вектора канадских городов
		while (x < 3)
		{
			if (city == towns->second[x]) cout << towns->first;
			x++;
		}
		towns = cities.insert(make_pair("америка", amer_cit));
		x = 0;//первый элемент вектора американских городов
		while (x < 50)
		{
			if (city == towns->second[x]) cout << towns->first;
			x++;
		}
	}
};