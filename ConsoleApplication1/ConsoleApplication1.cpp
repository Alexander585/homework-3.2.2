#include <iostream>
#include <string>

class Counter {
private:
    double value;

public:
    // Конструктор с значением по умолчанию
    Counter(double initialValue = 0) : value(initialValue) {}

    void set(double n) {
        value = n;
    }

    void increment() {
        value++;
    }

    void decrement() {
        value--;
    }

    double getValue() const {
        return value;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    char choice;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите y: ";
    std::cin >> choice;

    Counter counter;

    if (choice == 'y' || choice == 'Y') {
        double initialValue;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter.set(initialValue);
    }
    else {
        std::cout << "Используется значение по умолчанию (0)" << std::endl;
        // Конструктор по умолчанию уже установил значение 0
    }

    std::string command;

    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == "+") {
            counter.increment();
        }
        else if (command == "-") {
            counter.decrement();
        }
        else if (command == "=") {
            std::cout << counter.getValue() << std::endl;
        }
        else if (command == "x") {
            std::cout << "До свидания!" << std::endl;
            break;
        }
        else {
            std::cout << "Неизвестная команда!" << std::endl;
        }
    }

    return 0;
}