#include <iostream>
#include <ctime>
#include <map>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int sum;
    map<int, int> m;
    for (int i = 0; i < 1000; i++) {
        sum = rand() % 6 + 1 + rand() % 6 + 1;
        if ((i + 1) % 10 == 0);

        if (m.find(sum) != m.end()) {
            m[sum]++;
        }
        else {
            m[sum] = 1;
        }
    }
    cout << "���������� �������� ���� �������:" << endl;
    for (auto n : m) {
        cout << "����� �����: " << n.first << ", ���������� �������: " << n.second << endl;
    }
}