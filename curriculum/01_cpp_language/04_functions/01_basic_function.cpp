#include <iostream> 

void printSystemStatus()
{
    std::cout << "Navigation: OK\n";
    std::cout << "Guidance: OK\n";
    std::cout << "Control: OK\n";
}

void runControlStep()
{
    const double dt{0.1};
    const double acceleration{2.0};

    double velocity{0.0};

    velocity += acceleration * dt;

    std::cout << "Control-step velocity: " << velocity << '\n';
}

int main()
{
    std::cout << "Program started.\n\n";

    printSystemStatus();

    std::cout << "\nRunning control steps:\n";
    
    for(int step{0}; step < 3; ++step)
    {
        std::cout << "Step: " << step << '\n';

        runControlStep();
    }

    std::cout << "\nProgram finished.\n";

    return 0;
}