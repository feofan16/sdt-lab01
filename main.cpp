#include <iostream>

using namespace std;

int main()
{
    int x, y, sum, pr, razn, chastn; //объ€вление

    setlocale(LC_ALL, "Russian"); //руссификаци€ командной строки

    cout << "¬ведите два целых числа через пробел "; //приглашение
    cin >> x >> y; //прочитать два целых числа
    sum = x + y;
    cout << "—умма чисел\n" << sum;

    getchar();
    return 0; //показывает, что программа успешно завершена
}
