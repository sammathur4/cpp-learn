#include <iostream>
#include <string>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    namespace Advanced {
        double power(double base, int exp) {
            double result = 1.0;
            for (int i = 0; i < exp; ++i) {
                result *= base;
            }
            return result;
        }
    }
}

namespace Utils {
    void printTitle(const std::string& title) {
        std::cout << "\n=== " << title << " ===\n";
    }

    void printResult(const std::string& label, double value) {
        std::cout << label << ": " << value << "\n";
    }
}

int main() {
    Utils::printTitle("Namespace Demo");

    int sum = Math::add(5, 7);
    Utils::printResult("Sum", sum);

    double powResult = Math::Advanced::power(2.0, 10);
    Utils::printResult("2^10", powResult);

    return 0;
}
