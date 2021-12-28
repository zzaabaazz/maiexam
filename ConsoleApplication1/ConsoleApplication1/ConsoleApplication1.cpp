/***********************************************************
* Progect name : Lab 3 *
* Project type : win64 console application *
* File name : Lab3_Var20.cpp *
* Language : cpp. MSVS 2017 *
* Programmers : Belyakov Vladimir *
* Modified : 28.12.21 *
* Created : 28.12.21 *
* Last Revision : 28.12.21 *
* Comment : Массив*
***********************************************************/
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");//Русский язык
	const int NMAX = 10;//макс число элеменетов в массиве
	int AVec[NMAX];//массив
	int minim;//мин число
	int Iminim;//его индекс
	int maxim;//макс число
	int Imaxim;//его индекс
	int n = 5;//размер массива
	int i;//счетчик
	int num;//всего чисел в массиве
	//ввод
	cout << "введите массив: ";//приглашение к вводу
	for (int i = 0; i < n; i++)
	{
		cin >> AVec[i];//ввод
	}//for (int i = 0; i < NMAX; i++)
	//эхо-печать
	for (int i = 0; i < n; i++)
	{
		cout << AVec[i] << " ";
	}//for (int i = 0; i < NMAX; i++)
	cout << endl;

	//зануление неиспользованных элементов массива
	for (int i = n; i < NMAX; i++)
	{
		AVec[i] = 0;
	}//for (int i = 0; i < NMAX; i++)

	//инициализация переменных
	minim = AVec[0];
	maxim = AVec[0];
	Iminim = 0;
	Imaxim = 0;
	num = n;
	//основной алгоритм
	//поиск минимального и максимального
	for (i = 0; i < n; i++)
	{
		if (AVec[i] < minim)
		{
			minim = AVec[i];
			Iminim = i;
		}//if (AVec[i] < minim)
		if (AVec[i] > maxim)
		{
			maxim = AVec[i];
			Imaxim = i;
		}//if (AVec[i] > maxim)
	}//for (int i = 0; i < NMAX; i++)
	//вывод минимального и максимального
	cout << "maxim = " << maxim << " Imaxim = " << Imaxim << endl;
	cout << "minim = " << minim << " Iminim = " << Iminim << endl;
	//определяем начало интервала
	if (Iminim < Imaxim)
	{
		i = Iminim;
		n = Imaxim;
	}//if (Iminim < Imaxim)
	else if (Iminim > Imaxim)
	{
		i = Imaxim;
		n = Iminim;
	}


	if (i != n)
	{
		i++;
		while (i < n)//идем по интервалу
		{
			if ((AVec[i] % 2) == 0)//если элемент четный
			{
				n++;//увеличиваем число элементов в массиве
				for (int j = n; j > i; j--)//дублируем элемент
				{
					AVec[j] = AVec[j - 1];
				}//for (int j = n; j > i; j--)
				i++;
				num++;
			}//if ((AVec[i] % 2) == 0)
			i++;
		}//while (i < n)
	}
	

	//вывод массива
	cout << "AVec = " ;
	for (i = 0; i < num; i++)
	{
		cout << AVec[i] << " ";
	}//for (int i = 0; i < NMAX; i++)
	cout << endl;

	system("PAUSE");
	return 0;

}