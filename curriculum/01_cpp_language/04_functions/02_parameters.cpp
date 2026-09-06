#include <iostream>

void printValue(int value)
{
    std::cout << "Value: "
              << value << '\n';
}

void printControlState(
    int step,
    double velocity,
    double acceleration)
{
    std::cout << "step: "
              << step
              << ", velocity: "
              << velocity
              << ", acceleration: "
              << acceleration
              << '\n';
}

void demonstrateValueCopy(int value)
{
    std::cout << "Before local change: "
              << value << '\n';

    value = 100;

    std::cout << "After local change: "
              << value << '\n';
}

int main()
{
    std::cout << "Basic parameter calls:\n";

    printValue(5);
    printValue(10);
    printValue(42);

    std::cout << "\nControl-state parameters:\n";

    const double acceleration{2.0};
    const double dt{0.1};

    double velocity{0.0};

    for (int step{0}; step < 5; ++step)
    {
        velocity += acceleration * dt;

        printControlState(
            step,
            velocity,
            acceleration
        );
    }

    std::cout << "\nParameter copy behavior:\n";

    int number{5};

    std::cout << "Before function call: "
              << number << '\n';

    demonstrateValueCopy(number);

    std::cout << "After function call: "
              << number << '\n';

    return 0;
}