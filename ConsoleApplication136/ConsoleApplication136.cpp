#include <iostream>
using  namespace std;
int main() {
    cout << "Это часы c кукушкой.\n";
    cout << "Который час?\n";
    int hour;
    cin >> hour;
    if (hour >= 0 and hour < 13)
    {
        int CooCoo;
        if (hour == 0)
        {
            hour = 12;
        }
        while (CooCoo < hour) {
            cout << "Coo-Coo" << endl;
            CooCoo++;
        }
    }
}