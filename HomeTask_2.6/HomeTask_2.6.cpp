#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int num, n1, i, numnew;
    cout << "Введите число:\n";
    cin >> num;
    i = 0;
    numnew = 0;
    while (num > 0)
    {
        n1 = num % 10;
        if ((n1 != 3) && (n1 != 6))
        {
            numnew = numnew + n1 * pow(10, i);
            i++;
        }

        num = num / 10;
    }
    cout << "Новое число: " << numnew;

}

