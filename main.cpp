#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double price;
    double sum = 0;
    int count = 0;

    cout << "Введите стоимость товара (0 - закончить ввод): " << endl;

    while (true) {
        cin >> price;
        if (price == 0) {
            break;
        }
        if (price > 1000) {
            sum += price;
            count++;
        }
    }

    cout << "Общая стоимость товаров дороже 1000 рублей: " << sum << endl;
    cout << "Количество таких товаров: " << count << endl;

    return 0;
}