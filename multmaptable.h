#ifndef MULTMAPTABLE_H
#define MULTMAPTABLE_H
#include <QString>
#include <QVector>


class MultMapTable
{
private:
    struct Edge{
        bool mark;
        int len;
        int vertex1;
        int vertex2;
        Edge *path1;
        Edge *path2;
    };
    struct Node{
        QString data;
        Edge* edge;
    };
    QVector<Node> table;
    int vexnum,edgenum;
public:
    MultMapTable();
    int getVertex(){return vexnum;}
    int getEdge(){return edgenum;}
};

#endif // MULTMAPTABLE_H
