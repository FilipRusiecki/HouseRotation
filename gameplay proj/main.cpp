#include <iostream>
#include <SFML/Graphics.hpp>

int main1()
{
    int array[2][2] = { 1,2,3,4 };
    int temp = 0;
    int tempTwo = 0;
    int tempTree = 0;
    int tempFour = 0;
    int count = 0;
    std::cout << "=========This is the starting array===========\n" << std::endl;
    for (int row = 0; row < 2; row++)
    {
        for (int colume = 0; colume < 2; colume++)
        {
            std::cout << array[row][colume];
        }
        std::cout << std::endl;
    }
    std::cout << "========================================\n" << std::endl;
    std::cout << "How many times you want to rotate array ?" << std::endl;
    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        temp = array[0][0];
        tempTwo = array[0][1];
        tempTree = array[1][0];
        tempFour = array[1][1];
        array[0][1] = temp;
        array[1][1] = tempTwo;
        array[0][0] = tempTree;
        array[1][0] = tempFour;
        std::cout << "\n";
        std::cout << "========================================\n" << std::endl;
        for (int row = 0; row < 2; row++)
        {
            for (int colume = 0; colume < 2; colume++)
            {
                std::cout << array[row][colume];
            }
            std::cout << std::endl;
        }


    }

    return 0;
}