#include "Header.h"

LIBRARY::LIBRARY()
{
    book[1] = { "Л.Н. Толстой", "Война и мир 1 том", "Классическая проза", "Издательство АСТ", "Да", "Хорошое" };
    book[2] = { "Л.Н. Толстой", "Война и мир 2 том", "Классическая проза", "Издательство АСТ", "Да", "Хорошое" };
    book[3] = { "Л.Н. Толстой", "Война и мир 2 том", "Классическая проза", "Издательство АСТ", "Да", "Хорошое" };
    book[4] = { "Л.Н. Толстой", "Анна Каренина", "Драма", "Издательство АСТ", "Да", "Хорошое" };
}

LIBRARY::~LIBRARY()
{
}

const void LIBRARY::getAllBook()
{
    system("cls");
    for (const auto& x : book)
    {
        cout << "Номер: " << x.first << " Автор: " << x.second.author << " Книга: " << x.second.name 
            << " Раздел: " << x.second.chapter
            << " Издательство: " << x.second.publishing_house << " Наличие: " << x.second.availability
            << " Состояние: " << x.second.condition << endl;
    }
}

const void LIBRARY::getSectionBook()
{
    int tmp;
    system("cls");
    cout << "Выберити секцию по которой будуд выведены книги\n";
    cout << "1 По автор\n2 По названию\n3 По издательсту\n4 По разделу\n5 По наличию\n6 По оценки\n";
    cout << "Ввод: ";
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
    cout << "Введите имя автора: ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.author == tmp_s) {
            cout << "Номер: " << x.first << " Автор: " << x.second.author << " Книга: " << x.second.name
                << " Раздел: " << x.second.chapter
                << " Издательство: " << x.second.publishing_house << " Наличие: " << x.second.availability
                << " Состояние: " << x.second.condition << endl;
            check = false;
        }
    }
    
    if (check) {
        int tmp = 0;
        cout << "Введенного автора не сущестувет повторить ввод\n1 Да\n2 Нет\nВвод: ";
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
    cout << "Введите название книги: ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.name == tmp_s) {
            cout << "Номер: " << x.first << " Автор: " << x.second.author << " Книга: " << x.second.name
                << " Раздел: " << x.second.chapter
                << " Издательство: " << x.second.publishing_house << " Наличие: " << x.second.availability
                << " Состояние: " << x.second.condition << endl;
            check = false;
        }
    }

    if (check) {
        int tmp = 0;
        cout << "Введенного названия книги не сущестувет повторить ввод\n1 Да\n2 Нет\nВвод: ";
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
    cout << "Введите раздел книги: ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.chapter == tmp_s) {
            cout << "Номер: " << x.first << " Автор: " << x.second.author << " Книга: " << x.second.name
                << " Раздел: " << x.second.chapter
                << " Издательство: " << x.second.publishing_house << " Наличие: " << x.second.availability
                << " Состояние: " << x.second.condition << endl;
            check = false;
        }
    }

    if (check) {
        int tmp = 0;
        cout << "Введенного раздела книги не сущестувет повторить ввод\n1 Да\n2 Нет\nВвод: ";
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
    cout << "Введите издательство книги: ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.publishing_house == tmp_s) {
            cout << "Номер: " << x.first << " Автор: " << x.second.author << " Книга: " << x.second.name
                << " Раздел: " << x.second.chapter
                << " Издательство: " << x.second.publishing_house << " Наличие: " << x.second.availability
                << " Состояние: " << x.second.condition << endl;
            check = false;
        }
    }

    if (check) {
        int tmp = 0;
        cout << "Введенного издательства не сущестувет повторить ввод\n1 Да\n2 Нет\nВвод: ";
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
    cout << "Введите наличие книги(да, нет): ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.availability == tmp_s) {
            cout << "Номер: " << x.first << " Автор: " << x.second.author << " Книга: " << x.second.name
                << " Раздел: " << x.second.chapter
                << " Издательство: " << x.second.publishing_house << " Наличие: " << x.second.availability
                << " Состояние: " << x.second.condition << endl;
            check = false;
        }
    }

    if (check) {
        int tmp = 0;
        cout << "Некорректный ввод. Повторить ввод\n1 Да\n2 Нет\nВвод: ";
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
    cout << "Введите состояние книги(отличное, хорошое, плохое): ";
    cin.ignore();
    getline(cin, tmp_s);
    for (const auto& x : book)
    {
        if (x.second.condition == tmp_s) {
            cout << "Номер: " << x.first << " Автор: " << x.second.author << " Книга: " << x.second.name
                << " Раздел: " << x.second.chapter
                << " Издательство: " << x.second.publishing_house << " Наличие: " << x.second.availability
                << " Состояние: " << x.second.condition << endl;
            check = false;
        }
    }

    if (check) {
        int tmp = 0;
        cout << "Некорректный ввод. Повторить ввод\n1 Да\n2 Нет\nВвод: ";
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
    cout << "\nВведите номер книги который хотите отредактировать: ";
    cin >> number_book;

    map<int, BOOK>::iterator it;
    it = book.find(number_book);
    if (it == book.end()) {
        cout << "Такого номера не существует.\n1 Повторить ввод\n2 Выход\n";
        int enter;
        cout << "Ввод: ";
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
    cout << "\nЧто именно хотите поменять.\n";
    cout << "1 Автор\n2 Название книги\n3 Раздел\n4 Издательство\n5 Наличие\n6 Состояние\n";
    cout << "Ввод: ";
    cin >> name;

    if (name == 1) {
        cout << "Введите автора: ";
        cin >> tmp;
        book[number_book].author = tmp;
    }
    else if (name == 2) {
        cout << "Введите название книги: ";
        cin >> tmp;
        book[number_book].name = tmp;
    }
    else if (name == 3) {
        cout << "Введите раздел: ";
        cin >> tmp;
        book[number_book].chapter = tmp;
    }
    else if (name == 4) {
        cout << "Введите издательство: ";
        cin >> tmp;
        book[number_book].publishing_house = tmp;
    }
    else if (name == 5) {
        cout << "Введите наличие книги: ";
        cin >> tmp;
        book[number_book].availability = tmp;
    }
    else if (name == 6) {
        cout << "Введите состояние книги: ";
        cin >> tmp;
        book[number_book].condition = tmp;
    }
    else {
        cout << "Такого раздела не существует";
    }
    cout << "\n1-повторить ввод\n2-выйти\n";
    cout << "Ввод: ";
    cin >> name;
    if (name == 1)
        edBool(number_book);
}

const map<int, BOOK>& LIBRARY::addBook()
{
    system("cls");
    int iter = book.size() + 1;
    string enter;
    cout << "Введите автора: ";
    cin >> enter;
    book[iter].author = enter;
    cout << "\nВведите название книги: ";
    cin >> enter;
    book[iter].name = enter;
    cout << "\nВведите раздел книги: ";
    cin >> enter;
    book[iter].chapter = enter;
    cout << "\nВведите издательство книги: ";
    cin >> enter;
    book[iter].publishing_house = enter;
    cout << "\nВведите наличие книги: ";
    cin >> enter;
    book[iter].availability = enter;
    cout << "\nВведите состояние книги: ";
    cin >> enter;
    book[iter].condition = enter;
    
    return book;
}

const map<int, BOOK>& LIBRARY::deleteBook()
{
    int number_book = 0;
    cout << "Введите номер книги который хотите удалить\n";
    getAllBook();
    cout << "Ввод: ";
    cin >> number_book;

    map<int, BOOK>::iterator it;
    it = book.find(number_book);
    if (it == book.end())
    {
        system("cls");
        cout << "Введенного номера книги не существует попробуйте ввести еще раз!\n";
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
    cout << "Сохранено в файл Library.csv!\n";
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
        std::cout << "Ошибка при открытие файла\n";
    }
}