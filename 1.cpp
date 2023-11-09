using namespace std;
#include <iostream>

int main()
{
    setlocale(0, "");
    int first;
    int second;
    int three;
    int firstball;
    int secondball;
    int threeball;
    cout << "введите номер первого участника" << endl;
    cin >> first;
    cout << "введите номер второго участника" << endl;
    cin >> second;
    cout << "введите номер третьего участника" << endl;
    cin >> three;
    cout << "введите балы первого участника" << endl;
    cin >> firstball;
    cout << "введите балы второго участника" << endl;
    cin >> secondball;
    cout << "введите балы третьего участника" << endl;
    cin >> threeball;
    if (firstball > secondball || firstball > threeball)    //1
    {
        cout << "номер первого места:" << first << ". Его балл:" << firstball << endl;
        if (secondball > threeball)
        {
            cout << "номер второго места: " << second << ". Его балл:" << secondball << endl;
            cout << "номер третьего места:" << three << ". Его балл:" << threeball << endl;
        }
        else if (threeball > secondball)
        {
            cout << "номер второго места: " << three << ". Его балл:" << threeball << endl;
            cout << "номер третьего места:" << second << ". Его балл:" << secondball << endl;
        }
    }
    else if (secondball > firstball || secondball > threeball) //2
    {
        cout << "номер первого места:" << second << ". Его балл:" << secondball << endl;
        if (firstball > threeball)
        {
            cout << "номер второго места: " << first << ". Его балл:" << firstball << endl;
            cout << "номер третьего места:" << three << ". Его балл:" << threeball << endl;
        }
        else if (threeball > firstball)
        {
            cout << "номер второго места: " << three << ". Его балл:" << threeball << endl;
            cout << "номер третьего места:" << first << ". Его балл:" << firstball << endl;
        }
    }
    else if (threeball > firstball || threeball > secondball) //3
    {
        cout << "номер первого места:" << three << ". Его балл:" << threeball << endl;
        if (firstball > secondball)
        {
            cout << "номер второго места: " << first << ". Его балл:" << firstball << endl;
            cout << "номер третьего места:" << second << ". Его балл:" << secondball << endl;
        }
        else if (secondball > firstball)
        {
            cout << "номер второго места: " << second << ". Его балл:" << secondball << endl;
            cout << "номер третьего места:" << first << ". Его балл:" << firstball << endl;
        }
    }
}
