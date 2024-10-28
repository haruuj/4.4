#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double R1, R2, X_start, X_end, dX;
    cout << " R1= ";
    cin >> R1;
    cout << " R2= ";
    cin >> R2;
    cout << " X1= ";
    cin >> X_start;
    cout << " X2= ";
    cin >> X_end;
    cout << " dX= ";
    cin >> dX;
    cout << "\n----------------------------------\n";
    cout << "|   X   |           F            |\n";
    cout << "----------------------------------\n";
    for (double x = X_start; x <= X_end; x += dX) {
        double F;
        if (x < -2 * R1) {
            F = -x - 2 * R1;  // Перша гілка
        }
        else if (x >= -2 * R1 && x <= -R1) {
            F = sqrt(R1 * R1 - (x + R1) * (x + R1)) - R1;  // Дуга першого кола
        }
        else if (x > -R1 && x <= R2) {
            F = -sqrt(R2 * R2 - x * x);  // Дуга другого кола
        }
        else if (x > R2 && x <= 2 * R2) {
            F = sqrt(R2 * R2 - (x - R2) * (x - R2));  // Дуга третього кола
        }
        else {
            F = R2;  // Остання горизонтальна лінія
        }
        cout << "| " << setw(5) << x << " | " << setw(20) << F << " |\n";
    }

    cout << "----------------------------------\n";
    return 0;
}