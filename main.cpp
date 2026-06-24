#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "");
    srand(clock());
    int num = rand() % 998 + 1;

    int mode; // переменная для хранения режима

    cout << "Программа: угадай число.\n";
    cout << "Компьютер загадал число от 1 до 999. \n";
    cout << "Угадай его за минимальное число попыток. \n";

    cout << "Выберите режим игры:\n";
    cout << "1 - Обычный режим (с подсказками \"перелёт/недолёт\")\n";
    cout << "2 - Сложный режим (без подсказок, только \"не угадал\")\n";
    cin >> mode;

    int usernum;
    int count = 0;
    while (1)
    {
        do
        {
            cout << "Введите число: ";
            cin >> usernum;
            if (usernum < 1 || usernum > 999)
            {
                cout << "Число должно лежать в диапазоне от 1 до 999. Повторите ввод. \n";
            }
        } while (usernum < 1 || usernum > 999);
        count++;

        if (usernum > num) // проверяем режим
        {
            if (mode == 1)  // если обычный режим
            {
                cout << "Перелёт...\n";
            }
            else  // если сложный режим 
            {
                cout << "Не угадал.\n";
            }
        }
        else if (usernum < num)
        {
            if (mode == 1)  // если обычный режим
            {
                cout << "Недолёт...\n";
            }
            else  // если сложный 
            {
                cout << "Не угадал.\n";
            }
        }
        else
        {
            cout << "Вы угадали число " << num <<
                " за " << count << " попыток.\n";
            break;
        }
    }
}
