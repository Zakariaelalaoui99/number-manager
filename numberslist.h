#ifndef NUMBERSLIST_H
#define NUMBERSLIST_H

#include <QObject>
#include <QList>

class NumbersList : public QObject
{
    Q_OBJECT

private:
    // Private constructor
    explicit NumbersList(QObject *parent = nullptr);
    QList<double> m_numbers;

public:
    // Singleton
    static NumbersList* instance();


    const QList<double>& numbers() const { return m_numbers; }

    // logic methods that will trigger UI updates
    void addNumber(double n);
    void removeAt(int index);
    void editAt(int index, double newValue);
    void clear();

    void generateSpecial(int n, bool factorial);

signals:

    void listChanged();
};

#endif // NUMBERSLIST_H
