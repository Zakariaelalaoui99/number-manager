#include "numberslist.h"

NumbersList::NumbersList(QObject *parent) : QObject(parent) {}

NumbersList* NumbersList::instance() {
    static NumbersList* _instance = new NumbersList();
    return _instance;
}


void NumbersList::addNumber(double n) {
    m_numbers.append(n);
    emit listChanged(); // dynamic update
}

void NumbersList::removeAt(int index) {
    if (index >= 0 && index < m_numbers.size()) {
        m_numbers.removeAt(index);
        emit listChanged();
    }
}

void NumbersList::editAt(int index, double newValue) {
    if (index >= 0 && index < m_numbers.size()) {
        m_numbers[index] = newValue;
        emit listChanged();
    }
}

void NumbersList::clear() {
    m_numbers.clear();
    emit listChanged();
}


void NumbersList::generateSpecial(int n, bool factorial)
{
    m_numbers.clear();
    double current = 1;

    for (int i = 1; i <= n; ++i) {
        if (factorial) {
            current *= i; //  Factorial
            m_numbers.append(current);
        } else {
            m_numbers.append(static_cast<double>(i)); // 1, 2, 3...
        }
    }
    emit listChanged(); // mainwindow update
}
