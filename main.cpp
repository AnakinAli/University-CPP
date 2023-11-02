#include <iostream>
#include <string>

#include "custom.h"
#include "math.h"

using namespace std;


void task1() {
    /**
 *  Програма, която изчислява средно-аритметичното
 *  на последователно задавани цели положителни числа
 *  до задаването на определено контролно  число А.
 * */


    int A = getInput<int>("Enter A: ");


    double sum = 0;
    double count = 0;

    int n = getInput<int>("Enter N: ");

    while (A != n) {
        sum += n;
        count++;
        n = getInput<int>("Enter N: ");
    }

    cout << "Average: " << sum / count << endl;
}

void task2() {
/**
 * Програма за обръщане реда на цифрите в зададено число
 * */
    int n = getInput<int>("Enter Number To be reversed: ");
    while (n != 0) {
        cout << n % 10;
        n /= 10;
    }
    cout << endl;
}

void task3() {
    /**
     * Да се напише програма за намиране корените на квадратно уравнение по зададени трите му коефициента
     * */

    double a = getInput<double>("Enter A: ");
    double b = getInput<double>("Enter B: ");
    double c = getInput<double>("Enter C: ");

    double D = pow(b, 2) - (4 * a * c);
    double ans = 0;
    if (D == 0.0) {
        ans = (-b) / (2 * a);
        cout << "Only one answer: " << ans << endl;

    } else if (D > 0) {
        ans = ((-b) + (sqrt(D))) / (2 * a);
        cout << "X1: " << ans << endl;
        ans = ((-b) - (sqrt(D))) / (2 * a);
        cout << "X2: " << ans << endl;
    } else {
        cout << "No x1 & x2" << endl;
    }

}

int getIntegerLength(int num) {
    return to_string(num).length();
}

void task4() {
    /**
     * Да се състави алгоритъм и напише програма,
     * която последователно въвежда и сумира цели числа
     * докато сумата на четните положителни числа стане четирицифрено число.
     * */

    int sum = 0;

    int n = getInput<int>("Enter n: ");

    while (getIntegerLength(sum) < 4) {
        if (n % 2 == 0) {
            sum += n;
        }
        n = getInput<int>("Enter n: ");
    }
    cout << "Sum: " << sum << endl;

}

void task5() {
    /**
     * Да се състави алгоритъм и напише
     * програма, която извежда всички
     * естествени числа непревишаващи n,
     * които са равни на сумата от кубовете на своите цифри.
     * */


    int n = getInput<int>("Enter N: ");
    if (n <= 0) {
        cout << "No result" << endl;
    } else {
        int sumN = 0;
        for (int i = 10; i < n; ++i) {
            int t = i;

            while (t != 0) {
                sumN += pow(t % 10, 3);
                t /= 10;
            }

            if (i == sumN) {
                cout << "Number: " << i << endl;
            }
            sumN=0;
        }
    }
}

int main() {
    int t= getInput<int>("Select task By Number: " );

    switch (t) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        default:
            main();
            break;
    }

    return 0;
}
