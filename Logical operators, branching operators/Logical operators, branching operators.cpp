#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;

    if (a != b) {
        double temp = a;
        a = b;
        b = temp;
    }

    cout << "Результат: " << a << " " << b << endl;

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Введіть тризначне число (101-998): ";
    cin >> a;

    string result;

    if (a > 100 && a < 999) {
        int first = a / 100;
        int second = (a / 10) % 10;
        int last = a % 10;
        int sum = first + second + last;

        result = "Кількість цифр: 3\nСума цифр: " + to_string(sum) +
            "\nПерша і остання цифра: " + to_string(first) + "  " + to_string(last);
    }
    else {
        result = "Число не відповідає умові (a > 100 && a < 999)";
    }

    cout << result << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cout << "Введіть години, хвилини та секунди: ";
    cin >> h >> m >> s;

    bool isValid = (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59);
    cout << (isValid ? "Час допустимий" : "Час недопустимий") << endl;

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {
    int hour;
    cout << "Введіть годину (0-23): ";
    cin >> hour;

    string message;

    if (hour >= 0 && hour < 6) {
        message = "good night";
    }
    else if (hour >= 6 && hour < 12) {
        message = "good morning";
    }
    else if (hour >= 12 && hour < 18) {
        message = "good day";
    }
    else if (hour >= 18 && hour <= 23) {
        message = "good evening";
    }
    else {
        message = "Некоректна година";
    }

    cout << message << endl;

    return 0;
}















