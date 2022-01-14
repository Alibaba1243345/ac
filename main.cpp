#include <QCoreApplication>
#include <iostream>

struct Date{
    int day;
    int month;
    int yare;

};

void print(Date d){
    std::cout << d.day << "." << d.month << "." << d.yare <<std::endl;
}

void tommorow(Date d){
     std::cout<< d.day+1<< "." << d.month << "." << d.yare<<std::endl;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Date x;
    x.day = 14;
    x.month = 1;
    x.yare = 2022;
    print(x);
    std::cout << x.day << "." << x.month << "." << x.yare <<std::endl;
    tommorow(x);
    return a.exec();
}
