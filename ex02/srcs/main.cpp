#include "../includes/Array.hpp"

int main(){

    try{
        Array<int> num;
        // num[0] = 1;

        Array<unsigned int> num1(5);
        num1[0] = 0;
        num1[1] = 2;
        num1[2] = 4;
        num1[3] = 6;
        num1[4] = 8;
        // num1[5] = 10;

        Array<std::string> str(3);
        str[0] = "Devil May cry";
        str[1] = "X";
        str[2] = "Bayonetta";
        // str[3] = "Gow of War";

        Array<float> numFloat(3);
        numFloat[0] = 52.4f;
        numFloat[1] = 99.9f;
        numFloat[2] = 12.5f;
        // numFloat[3] = 78.78f;

        std::cout << "===SIZE===\n";
        std::cout << "Int num: " << num.size() << "\n"
                << "UI num1: " << num1.size() << "\n"
                << "string str: " << str.size() << "\n"
                << "Float numFloat: " << numFloat.size() << std::endl;

        std::cout << "===PRINT===\n";
        std::cout << "UI: \n";
        for (unsigned int i = 0; i < num1.size(); i++)
            std::cout << num1[i] << std::endl;

        std::cout << "\nSTRING: \n";
        for (unsigned int i = 0; i < str.size(); i++)
            std::cout << str[i] << std::endl;

        std::cout << "\nFLOAT: \n";
        for (unsigned int i = 0; i < numFloat.size(); i++)
            std::cout << numFloat[i] << std::endl;

        std::cout << "===COPY===";
        Array<std::string> copyString(str);
        Array<float> copyFloat(numFloat);

        std::cout << "\ncopy STRING: \n";
        for (unsigned int i = 0; i < copyString.size(); i++)
            std::cout << copyString[i] << std::endl;

        std::cout << "\ncopy FLOAT: \n";
        for (unsigned int i = 0; i < copyFloat.size(); i++)
            std::cout << copyFloat[i] << std::endl;

        std::cout << "===(OPERATOR=)===";
        Array<unsigned int> opUI(2);
        opUI[0] = 10;
        opUI[1] = 12;

        opUI = num1;
        std::cout << "\nUI: \n";
        for (unsigned int i = 0; i < num1.size(); i++)
            std::cout << num1[i] << std::endl;

        return 0;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}
