#ifndef HSTACK_H
#define HSTACK_H
#include <QString>
#include <QVector>

class HStack
{
    QVector<QString> st;
public:
    HStack();
    QString top();
    void push(const QString& s);
    void pop();
    void clear();
    bool empty();
    int size();
};

#endif // HSTACK_H
