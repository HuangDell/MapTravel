#include "hstack.h"

HStack::HStack(){}

void HStack::push(const QString &s)
{
    st.push_front(s);
}

void HStack::pop()
{
    st.pop_front();
}

void HStack::clear()
{
    st.clear();
}

QString HStack::top()
{
    if(empty())
        return "error!";
    return st[0];
}

int HStack::size()
{
    return st.size();
}

bool HStack::empty()
{
    return st.empty();
}
