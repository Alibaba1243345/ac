#include <QCoreApplication>

struct Date{
    int day;
    int month;
    int yare;

};
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
