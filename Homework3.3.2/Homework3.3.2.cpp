// Homework3.3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter
{
private:
    double num = 0;
public:
    Counter(double num) {
        this->num = num;
    }
    void plus(Counter* number, int plus_num) {
        plus_num++;
        number->num = plus_num;
    }
    void minus(Counter* number, int minus_num) {
        minus_num--;
        number->num = minus_num;
    }
    void equal(Counter* number, int equal_num) {
        number->num = equal_num;
        std::cout << number->num << std::endl;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    std::string answer, sign;
    double new_num = 1;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::cin >> answer;

    if (answer == "yes") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> new_num;
    }

    Counter calc(new_num);

    while (true)
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> sign;

        if (sign == "+") {
            calc.plus(&calc, new_num);
            new_num++;
        }
        if (sign == "-") {
            calc.minus(&calc, new_num);
            new_num--;
        }
        if (sign == "=") {
            calc.equal(&calc, new_num);
        }
        if (sign == "x") {
            std::cout << "До свидания!" << std::endl;
            break;
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
