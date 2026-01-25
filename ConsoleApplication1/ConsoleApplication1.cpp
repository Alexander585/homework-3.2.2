#include <iostream>
#include <string>

class Counter {
private:
    int value;

public:
    Counter() : value(1) {}

    Counter(int initialValue) : value(initialValue) {}

    void increment() {
        value++;
    }

    void decrement() {
        value--;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    std::string choice;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::cin >> choice;

    int initialValue;
    Counter* counter;

    if (choice == "yes") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = new Counter(initialValue);
    }
    else {
        counter = new Counter();
        std::cout << "Используется значение по умолчанию: " << counter->getValue() << std::endl;
    }

    std::string command;

    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == "+") {
            counter->increment();
        }
        else if (command == "-") {
            counter->decrement();
        }
        else if (command == "=") {
            std::cout << counter->getValue() << std::endl;
        }
        else if (command == "x") {
            std::cout << "До свидания!" << std::endl;
            break;
        }
        else {
            std::cout << "Неизвестная команда!" << std::endl;
        }
    }

    delete counter;
    return 0;
}