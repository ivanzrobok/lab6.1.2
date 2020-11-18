// lab6.1.2recurs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
using namespace std;
void create(int* arr, const int n, int i)
{
    arr[i] = rand() % 50;
    if (i < n - 1)
        create(arr, n, i + 1);
}
void print(int* arr, const int n,int i) {
    cout <<  arr[i]<< " ";
    if (i < n - 1)
        print(arr, n, i + 1);
    else
        cout << endl;
}
int sum(int* arr, int const n, int s, int i) {

    if (arr[i] > 0 && arr[i] % 2 == 1)
        s += arr[i];
    if (i < n - 1)
        return sum(arr, n, s, i + 1);
    else
        return s;


}
void count(int* arr, const int n, int s, int i)//згідно варіанту функція виводить всі додатні і непарні елементи масиву.
{
    if (arr[i] > 0 && arr[i] % 2 == 1)
        cout << arr[i] << " ";
    if (i < n - 1)
        count(arr, n, s, i + 1);
    else
        cout << endl;

}


int main()
{
    int const n = 23;
    int p[n];
    create(p, n, 0);
    print(p, n,0);
    cout << "suma modefication array " << sum(p, n,0,0) << endl;
    count(p, n,0,0);
    cout << endl;
    
}