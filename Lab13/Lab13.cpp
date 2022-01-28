#include <iostream>
#include <algorithm>
#include "Time.h"
#include "vector"

using namespace std;

typedef vector<Time> TVector;
Time s;

//Функция, для создания списка времен с размером n с ручным вводом
TVector make_vector(int n) {
    Time a;
    TVector v;

    for (int i = 0; i < n; i++) {
        cin >> a;
        // Добавление элемента в конец вектора
        v.push_back(a);
    }

    return v;
}

//Функция для вывода вектора
void print_vector(TVector v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}

//Структура с оператором для наибольшего времени
struct Greater_s {
    bool operator() (Time t) {
        if (t > s) return true;
        else return false;
    }
};

//Функция для нахождения среднего времени
Time srednee(TVector v) {
    Time s = v[0];

    for (int i = 0; i < v.size(); i++) {
        s = s + v[i];
    }

    int n = v.size();
    
    return s / n;
}

void sum(Time& t) {
    t = t + s;
}

//Структура с оператором для равного времени
struct Equal_s {
    bool operator() (Time t) {
        return t == s;
    }
};

int main()
{
    int n;
    cin >> n;

    TVector v;
    v = make_vector(n);
    print_vector(v);

    //Заменить максимальный элемент на заданное значение
    TVector::iterator i;
    i = max_element(v.begin(), v.end());
    cout << "max = " << *(i) << endl;
    s = *(i);

    Time currT;
    cin >> currT;

    replace_if(v.begin(), v.end(), Equal_s(), currT);
    cout << "Zamena " << endl;
    print_vector(v);


    //Найти минимальный элемент и удалить его из контейнера
    i = min_element(v.begin(), v.end());
    cout << "min = " << *(i) << endl;
    s = *i;

    i = remove_if(v.begin(), v.end(), Equal_s());
    v.erase(i, v.end());
    print_vector(v);

    //К каждому элементу добавить среднее арифметическое контейнера
    s = srednee(v);
    cout << "sred = " << s << endl;
    for_each(v.begin(), v.end(), sum);
    cout << "Zamena " << endl;
    print_vector(v);
}