#include<iostream>
using namespace std;
int main()
{
 setlocale(0, "");
 int prog;
 cout << "Выберите прогу \n [1]Вывести квадрат и куб \n [2] Среднее Ариф \n [3] Сумма чётных сичел";
 cin >> prog;
 switch (prog)
 {
 case 1:
  system("cls");
  int num;
  int num2;
  int num3;
  cout << "Введите числО" << endl;
  cin >> num;
  num2 = num * num;
  num3 = num2 * num;
  cout << "Квадрат " << num << " = " << num2 << endl;
  cout << "Куб " << num << " = " << num3;
  break;
 case 2:
  system("cls");
  int rest;
  int num15;
  int gis;
  cout << "Введите  два  числа" << endl;
  cin >> rest >> num15;
  gis = (rest + num15) / 2;
  cout << gis;
  break;

 case 3:
  system("cls");

  int istart, iend;
  int sum;

  cout << "Введите диапозон\n";
  cin >> istart;
  cin >> iend;

  for (int i = istart; i <= iend; i++) {
   if (i % 2 == 0) {
    sum += i;
   }
  }

  cout << "Сумма всех чётных чисел: " << sum << endl;
  break;

 default:
  cout << "Выберите из перечисленных вариантов";
  break;
 }
 return 0;
}