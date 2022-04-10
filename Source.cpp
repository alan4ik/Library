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

        std::cout << "����������\n\n1 ����� ���� ����\n2 ����� ����� �� ������\n3 �������������� �����\n4 ���������� �����\n5 �������� �����\n6 �������� ���� ���� � ����\n7 �������� ���� �� �����\n";
        std::cout << "����: ";
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

        std::cout << "\n��������� � ���� - 1; ��������� ��������� - 0" << endl;
        std::cout << "����: ";
        std::cin >> flag;
    }
}