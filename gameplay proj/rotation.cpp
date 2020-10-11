#include <iostream>
#include <SFML/Graphics.hpp>
int main2()
{
    int array[2][2] = { 1,2,3,4 };
    int temp = 0;
    int tempTwo = 0;
    int tempTree = 0;
    int tempFour = 0;
    std::cout << "this is the array before the rotation" << std::endl;
    for (int row = 0; row < 2; row++)
    {
        for (int colume = 0; colume < 2; colume++)
        {
            std::cout << array[row][colume];
        }
        std::cout << std::endl;
    }

    temp = array[0][0];          
    tempTwo = array[0][1];     
    tempTree = array[1][0];     
    tempFour = array[1][1];     
    array[0][1] = temp;         
    array[1][1] = tempTwo;
    array[0][0] = tempTree;
    array[1][0] = tempFour;
    std::cout << "\n";
    std::cout << "this is the array after the rotation \n" << std::endl;
    for (int row = 0; row < 2; row++)
    {
        for (int colume = 0; colume < 2; colume++)
        {
            std::cout << array[row][colume];
        }
        std::cout << std::endl;
    }
    std::cout << "\n";
    std::cout << "this is the array after another the rotation \n" << std::endl;
    temp = array[0][0];          
    tempTwo = array[0][1];      
    tempTree = array[1][0];     
    tempFour = array[1][1];     
    array[0][1] = temp;
    array[1][1] = tempTwo;
    array[0][0] = tempTree;
    array[1][0] = tempFour;

    for (int row = 0; row < 2; row++)
    {
        for (int colume = 0; colume < 2; colume++)
        {
            std::cout << array[row][colume];
        }
        std::cout << std::endl;
    }
    return 0;
}