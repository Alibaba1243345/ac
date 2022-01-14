#include <QCoreApplication>
#include <iostream>

struct Date{
    int day;
    int month;
    int yare;

};
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Date x;
    x.day = 14;
    x.month = 1;
    x.yare = 2022;
    std::cout << x.day << "." << x.month << "." << x.year <<std::endl;
    return a.exec();
}
