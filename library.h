#include <iostream>
#include <string>
#ifndef STRINGTOTEXT_LIBRARY_H
#define STRINGTOTEXT_LIBRARY_H


class converter {
private:
    long long int MAXIMUM_NUMBER = 999999999999;
    std::string units[10] = {"", "��", "��",
            "��� ", "������ ", "���� ",
            "����� ", "���� ", "������ ", "������ "};

    std::string teens[10] =  {"������ ", "���������� ",
                              "���������� ", "���������� ",
                              "������������ ", "���������� ",
                              "���������� ", "����������� ",
                              "������������� ", "������������ "};
    std::string tens[10] = {
                            "", "", "�������� ", "�������� ",
                            "����� ", "��������� ",
                            "���������� ", "��������� ",
                            "����������� ", "��������� "
    };

    std::string hundreds[10] = {
            "", "��� ", "������ ",
            "������ ", "��������� ",
            "������� ", "�������� ",
            "������� ", "��������� ",
            "��������� " };

    std::string forms[4][4] = {
            {"m"},
            {"t", "������ ",   "������ ",    "����� "},
            {"m", "������� ",  "�������� ",  "��������� "},
            {"m", "�������� ", "��������� ", "���������� "}
    }; //   primary,    secondary,  remaning, form



    std::string blocks(int block, int index);
public:
    std::string int2text(long long int number);

};

#endif //STRINGTOTEXT_LIBRARY_H
