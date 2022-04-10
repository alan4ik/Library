#include "Header.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    LIBRARY lib;
    char flag = '1';

    while (flag == '1')
    {
        system("cls");

        std::cout << "Библиотека\n\n1 Вывод всех книг\n2 Вывод книги по секции\n3 Редактирование книги\n4 Добавление книги\n5 Удаление книги\n6 Выгрузка всех книг в файл\n7 Загрузка книг из файла\n";
        std::cout << "Ввод: ";
        std::cin >> flag;
        switch (flag)
        {
        case '1':
            lib.getAllBook();
            break;
        case '2':
            lib.getSectionBook();
            break;
        case '3':
            lib.editing();
            break;
        case '4':
            lib.addBook();
            break;
        case '5':
            lib.deleteBook();
            break;
        case '6':
            lib.saveFile();
            break;
        case '7':
            lib.readFile();
            break;
        }

        std::cout << "\nВернуться в меню - 1; Завершить программу - 0" << endl;
        std::cout << "Ввод: ";
        std::cin >> flag;
    }
}