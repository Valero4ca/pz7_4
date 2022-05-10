#include <iostream>


int main()
{
    setlocale(LC_ALL, "Russian");

    struct spisok {
        int year;
        int number;
    };

    struct library {
        int  number_books;
        char author[64];
        char title[64];
        spisok year_publication;
        spisok publication_house;
        spisok number_str;
    };

    library Spisokbooks[3];

    for (int i = 0; i < 3; i++) {
        Spisokbooks[i].number_books = i + 1;

        std::cout << "Книга" << i + 1 << "." << "Введите автора : " << std::endl;
        std::cin >> Spisokbooks[i].author;

        std::cout << "Книга" << i + 1 << "." << "Введите название  : " << std::endl;
        std::cin >> Spisokbooks[i].title;

        std::cout << "Книга" << i + 1 << "." << "Введите  год публикации: " << std::endl;
        std::cin >> Spisokbooks[i].year_publication;
        std::cout << "Книга" << i + 1 << "." << "Введите издательство  : " << std::endl;
        std::cin >> Spisokbooks[i].publication_house;

        std::cout << "Книга" << i + 1 << "." << "Введите номер страницы : " << std::endl;
        std::cin >> Spisokbooks[i].number_str;

    }

    for (int i = 0; i < 3; i++) {

        std::cout << "Книга" << i + 1 << "." << "Автор: " << Spisokbooks[i].author << std::endl;
        std::cout << "Книга" << i + 1 << "." << "Название : " << Spisokbooks[i].title << std::endl;
        std::cout << "Книга" << i + 1 << "." << "Год публикации: " << Spisokbooks[i].year_publication << ":" << Spisokbooks[i].year_publication << std::endl;
        std::cout << "Книга" << i + 1 << "." << "Издательство : " << Spisokbooks[i].publication_house << ":" << Spisokbooks[i].publication_house << std::endl;

        std::cout << "Список книг:" << std::endl;

        for (int i = 0; i < 3; i++) {
            std::cout << "[" << i << "]" << Spisokbooks[i].year_publication << std::endl;
        }

        int year_publication;
        std::cin >> year_publication;

        spisok number;

        std::cout << "Фамилия автора :" << std::endl;
        std::cin >> number;
        std::cout << "Год:" << std::endl;
        std::cin >> year_publication;

        if (year_publication <= Spisokbooks[].) {
            if (year_publication < Spisokbooks[].) {
                std::cout << "Можно ехать !";
            }
            else {
                std::cout << "ехать нелья!";
            }
        }
        else {
            std::cout << "Получите результат!";
        }


        return 0;

    }
