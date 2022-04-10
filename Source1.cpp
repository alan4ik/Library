#include "Header.h"

LIBRARY::LIBRARY()
{
    book[1] = { "�.�. �������", "����� � ��� 1 ���", "������������ �����", "������������ ���", "��", "�������" };
    book[2] = { "�.�. �������", "����� � ��� 2 ���", "������������ �����", "������������ ���", "��", "�������" };
    book[3] = { "�.�. �������", "����� � ��� 2 ���", "������������ �����", "������������ ���", "��", "�������" };
    book[4] = { "�.�. �������", "���� ��������", "�����", "������������ ���", "��", "�������" };
}

LIBRARY::~LIBRARY()
{
}

const void LIBRARY::getAllBook()
{
    system("cls");
    for (const auto& x : book)
    {
        cout << "�����: " << x.first << " �����: " << x.second.author << " �����: " << x.second.name 
            << " ������: " << x.second.chapter
            << " ������������: " << x.second.publishing_house << " �������: " << x.second.availability
            << " ���������: " << x.second.condition << endl;
    }
}

const void LIBRARY::getSectionBook()
{
    int tmp;
    system("cls");
    cout << "�������� ������ �� ������� ����� �������� �����\n";
    cout << "1 �� �����\n2 �� ��������\n3 �� �����������\n4 �� �������\n5 �� �������\n6 �� ������\n";
    cout << "����: ";
    cin >> tmp;
    switch (tmp)
    {
    case 1:
        getAuthor();
        break;
    case 2:
        name();
        break;
    case 3:
        chapter();
        break;
    case 4:
        publishing_house();
        break;
    case 5:
        availability();
        break;
    case 6:
        condition();
        break;
    }
}

const void LIBRARY::getAuthor()
{
    string tmp_s;
    bool check = true;
    cout << "������� ��� ������: ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.author == tmp_s) {
            cout << "�����: " << x.first << " �����: " << x.second.author << " �����: " << x.second.name
                << " ������: " << x.second.chapter
                << " ������������: " << x.second.publishing_house << " �������: " << x.second.availability
                << " ���������: " << x.second.condition << endl;
            check = false;
        }
    }
    
    if (check) {
        int tmp = 0;
        cout << "���������� ������ �� ���������� ��������� ����\n1 ��\n2 ���\n����: ";
        cin >> tmp;
        if (tmp == 1) {
            getAuthor();
        }
        else {
            return void();
        }

    }
}

const void LIBRARY::name()
{
    string tmp_s;
    bool check = true;
    cout << "������� �������� �����: ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.name == tmp_s) {
            cout << "�����: " << x.first << " �����: " << x.second.author << " �����: " << x.second.name
                << " ������: " << x.second.chapter
                << " ������������: " << x.second.publishing_house << " �������: " << x.second.availability
                << " ���������: " << x.second.condition << endl;
            check = false;
        }
    }

    if (check) {
        int tmp = 0;
        cout << "���������� �������� ����� �� ���������� ��������� ����\n1 ��\n2 ���\n����: ";
        cin >> tmp;
        if (tmp == 1) {
            getAuthor();
        }
        else {
            return void();
        }

    }
}

const void LIBRARY::chapter()
{
    string tmp_s;
    bool check = true;
    cout << "������� ������ �����: ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.chapter == tmp_s) {
            cout << "�����: " << x.first << " �����: " << x.second.author << " �����: " << x.second.name
                << " ������: " << x.second.chapter
                << " ������������: " << x.second.publishing_house << " �������: " << x.second.availability
                << " ���������: " << x.second.condition << endl;
            check = false;
        }
    }

    if (check) {
        int tmp = 0;
        cout << "���������� ������� ����� �� ���������� ��������� ����\n1 ��\n2 ���\n����: ";
        cin >> tmp;
        if (tmp == 1) {
            getAuthor();
        }
        else {
            return void();
        }

    }
}

const void LIBRARY::publishing_house()
{
    string tmp_s;
    bool check = true;
    cout << "������� ������������ �����: ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.publishing_house == tmp_s) {
            cout << "�����: " << x.first << " �����: " << x.second.author << " �����: " << x.second.name
                << " ������: " << x.second.chapter
                << " ������������: " << x.second.publishing_house << " �������: " << x.second.availability
                << " ���������: " << x.second.condition << endl;
            check = false;
        }
    }

    if (check) {
        int tmp = 0;
        cout << "���������� ������������ �� ���������� ��������� ����\n1 ��\n2 ���\n����: ";
        cin >> tmp;
        if (tmp == 1) {
            getAuthor();
        }
        else {
            return void();
        }

    }
}

const void LIBRARY::availability()
{
    string tmp_s;
    bool check = true;
    cout << "������� ������� �����(��, ���): ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.availability == tmp_s) {
            cout << "�����: " << x.first << " �����: " << x.second.author << " �����: " << x.second.name
                << " ������: " << x.second.chapter
                << " ������������: " << x.second.publishing_house << " �������: " << x.second.availability
                << " ���������: " << x.second.condition << endl;
            check = false;
        }
    }

    if (check) {
        int tmp = 0;
        cout << "������������ ����. ��������� ����\n1 ��\n2 ���\n����: ";
        cin >> tmp;
        if (tmp == 1) {
            getAuthor();
        }
        else {
            return void();
        }

    }
}

const void LIBRARY::condition()
{
    string tmp_s;
    bool check = true;
    cout << "������� ��������� �����(��������, �������, ������): ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.condition == tmp_s) {
            cout << "�����: " << x.first << " �����: " << x.second.author << " �����: " << x.second.name
                << " ������: " << x.second.chapter
                << " ������������: " << x.second.publishing_house << " �������: " << x.second.availability
                << " ���������: " << x.second.condition << endl;
            check = false;
        }
    }

    if (check) {
        int tmp = 0;
        cout << "������������ ����. ��������� ����\n1 ��\n2 ���\n����: ";
        cin >> tmp;
        if (tmp == 1) {
            getAuthor();
        }
        else {
            return void();
        }

    }
}

const void LIBRARY::editing()
{
    int number_book;
    getAllBook();
    cout << "\n������� ����� ����� ������� ������ ���������������: ";
    cin >> number_book;

    map<int, BOOK>::iterator it;
    it = book.find(number_book);
    if (it == book.end()) {
        cout << "������ ������ �� ����������.\n1 ��������� ����\n2 �����\n";
        int enter;
        cout << "����: ";
        cin >> enter;
        if (enter == 1) {
            system("cls");
            editing();
        }
    }
    else {
        edBool(number_book);
    }
}

const void LIBRARY::edBool(int& number_book)
{
    int name;
    bool check = true;
    string tmp;
    cout << "\n��� ������ ������ ��������.\n";
    cout << "1 �����\n2 �������� �����\n3 ������\n4 ������������\n5 �������\n6 ���������\n";
    cout << "����: ";
    cin >> name;

    if (name == 1) {
        cout << "������� ������: ";
        cin >> tmp;
        book[number_book].author = tmp;
    }
    else if (name == 2) {
        cout << "������� �������� �����: ";
        cin >> tmp;
        book[number_book].name = tmp;
    }
    else if (name == 3) {
        cout << "������� ������: ";
        cin >> tmp;
        book[number_book].chapter = tmp;
    }
    else if (name == 4) {
        cout << "������� ������������: ";
        cin >> tmp;
        book[number_book].publishing_house = tmp;
    }
    else if (name == 5) {
        cout << "������� ������� �����: ";
        cin >> tmp;
        book[number_book].availability = tmp;
    }
    else if (name == 6) {
        cout << "������� ��������� �����: ";
        cin >> tmp;
        book[number_book].condition = tmp;
    }
    else {
        cout << "������ ������� �� ����������";
    }
    cout << "\n1-��������� ����\n2-�����\n";
    cout << "����: ";
    cin >> name;
    if (name == 1)
        edBool(number_book);
}

const map<int, BOOK>& LIBRARY::addBook()
{
    system("cls");
    int iter = book.size() + 1;
    string enter;
    cout << "������� ������: ";
    cin >> enter;
    book[iter].author = enter;
    cout << "\n������� �������� �����: ";
    cin >> enter;
    book[iter].name = enter;
    cout << "\n������� ������ �����: ";
    cin >> enter;
    book[iter].chapter = enter;
    cout << "\n������� ������������ �����: ";
    cin >> enter;
    book[iter].publishing_house = enter;
    cout << "\n������� ������� �����: ";
    cin >> enter;
    book[iter].availability = enter;
    cout << "\n������� ��������� �����: ";
    cin >> enter;
    book[iter].condition = enter;
    
    return book;
}

const map<int, BOOK>& LIBRARY::deleteBook()
{
    int number_book = 0;
    cout << "������� ����� ����� ������� ������ �������\n";
    getAllBook();
    cout << "����: ";
    cin >> number_book;

    map<int, BOOK>::iterator it;
    it = book.find(number_book);
    if (it == book.end())
    {
        system("cls");
        cout << "���������� ������ ����� �� ���������� ���������� ������ ��� ���!\n";
        deleteBook();
    }

    book.erase(number_book);

    return book;
}

const void LIBRARY::saveFile()
{
    ofstream out;
    out.open("Library.csv");
    for (const auto& x : book) {
        out << x.first << ";" << x.second.author << ";" << x.second.name << ";" << x.second.chapter << ";"
            << x.second.publishing_house << ";"
            << x.second.availability << ";" << x.second.condition << ";" << endl;
    }
    out.close();
    cout << "��������� � ���� Library.csv!\n";
}

const void LIBRARY::readFile()
{
    string line;
    string tmp;
    vector<string> tmp_vec;
    ifstream in("Library.csv");
    string number_book;
    int tmp_nubmer;
    int t = book.size();
    if (in.is_open()) {
        while (getline(in, line)) {
            number_book = line[0];
            tmp_nubmer = atoi(number_book.c_str());
            cout << line << endl;
            for (int i = 2; i < line.length(); i++) {
                if (line[i] == ';') {
                    if (tmp[0] == ';')
                        tmp.erase(tmp.find(';'), 1);
                    tmp_vec.push_back(tmp);
                    tmp.clear();
                }
                tmp.push_back(line[i]);
            }
            cout << tmp_nubmer << endl;
            book[t + tmp_nubmer].author = tmp_vec[0];
            book[t + tmp_nubmer].name = tmp_vec[1];
            book[t + tmp_nubmer].chapter = tmp_vec[2];
            book[t + tmp_nubmer].publishing_house = tmp_vec[3];
            book[t + tmp_nubmer].availability = tmp_vec[4];
            book[t + tmp_nubmer].condition = tmp_vec[5];
            tmp_vec.clear();

        }
        in.close();
    }
    else {
        std::cout << "������ ��� �������� �����\n";
    }
}