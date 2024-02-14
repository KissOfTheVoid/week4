#include <iostream>
#include <fstream>

void sumIntegersInFile(const std::string& inputFilePath, const std::string& outputFilePath){
    std::ifstream input(inputFilePath);
    std::ofstream output(outputFilePath);
    if (!input.is_open() or !output.is_open()) {
        std::cout << "Error blinb";
        return;
    }
    else std::cout << "Vse norm" << ' ';

    std::string str, num;
    int sum = 0;

    while (std::getline(input, str)){
        if (!str.empty()){
            num = "";

            for (char c : str){
                if (isdigit(c)) num += c;
                else if (!num.empty()){
                    sum += std::stoi(num);
                    num = "";
                }
            }
        }
    }

    output << sum;

    input.close();
    output.close();
}

int main() {
     std::cout << "Текущий рабочий каталог: " << std::filesystem::current_path() << std::endl;
    sumIntegersInFile("input.txt",
                      "output.txt");
    return 0;
}