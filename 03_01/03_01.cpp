#include <iostream>

class Calculator
{
  private:

    double num1{};
    double num2{};

  public:

    double add()
    {
        return num1 + num2;
    }

    double multiply()
    {
        return num1 * num2;
    }

    double subtract_1_2()
    {
        return num1 - num2;
    }

    double subtract_2_1()
    {
        return num2 - num1;
    }

    double divide_1_2()
    {
        return num1 / num2;
    }

    double divide_2_1()
    {
        return num2 / num1;
    }

    bool set_num1(double newValue)
    {
        if (newValue == 0)
        {
            return false; 
        }
        num1 = newValue;
        return true;
    }

    bool set_num2(double newValue)
    {
        if (newValue == 0)
        {
            return false;
        }
        num2 = newValue;
        return true;
    }
};

bool printInput(int localIndex, Calculator &localCalc)
{
    std::cout << "Введите num" << localIndex << ": ";
    double localNum{};
    std::cin >> localNum;
    if (localNum == 0)
    {
        std::cout << "Неверный ввод !" << std::endl;
        return true;
    };
    if (localIndex == 1)
    {
        localCalc.set_num1(localNum);
    }
    else
    {
        localCalc.set_num2(localNum);
    }

    return false;
}

void printResult(Calculator &localCalc)
{
    std::cout << "num1 + num2 = " << localCalc.add() << std::endl;
    std::cout << "num1 - num2 = " << localCalc.subtract_1_2() << std::endl;
    std::cout << "num2 - num1 = " << localCalc.subtract_2_1() << std::endl;
    std::cout << "num1 * num2 = " << localCalc.multiply() << std::endl;
    std::cout << "num1 / num2 = " << localCalc.divide_1_2() << std::endl;
    std::cout << "num2 / num1 = " << localCalc.divide_2_1() << std::endl;
}

void execute()
{
    Calculator Calc;
    while (printInput(1, Calc))
    {
    }
    while (printInput(2, Calc))
    {
    }
    printResult(Calc);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        execute();
    }

    return 0;
}
