#include <iostream>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Graphics.hpp>
int main()
{
    int array[5][5] = { 0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1 };
    int temp = 0;int tempTwo = 0;int tempTree = 0;int tempFour = 0;
    int tempFive = 0;int tempSix = 0;int tempSeven = 0;int tempEight = 0;
    int tempNine = 0;int tempTen = 0;int tempEleven = 0;int tempTwelve = 0;
    int tempThirteen = 0;int tempFourteen = 0;int tempFiftheen = 0;int tempSixteen = 0;
    int tempSeventeen = 0; int tempEighteen = 0; int tempNineteen = 0; int tempTwenty = 0;
    int tempTwentyone = 0;int tempTwentytwo = 0;int tempTwentytree = 0;int tempTwentyfour = 0; int tempTwentyfive = 0;
    int count = 0;
    std::cout << "=========This is the starting array===========\n" << std::endl;
    for (int row = 0; row < 5; row++)
    {
        for (int colume = 0; colume < 5; colume++)
        {
            std::cout << array[row][colume];
        }
        std::cout << std::endl;
    }
    std::cout << "========================================\n" << std::endl;
    std::cout << "How many times you want to rotate array ?" << std::endl;
    std::cin >> count;
    std::cout << "\n" << std::endl;
    for (int i = 0; i < count; i++)
    {
        temp = array[0][0];
        tempTwo = array[0][1];
        tempTree = array[0][2];
        tempFour = array[0][3];
        tempFive = array[0][4];

        tempSix = array[1][0];
        tempSeven = array[1][1];
        tempEight = array[1][2];
        tempNine = array[1][3];
        tempTen = array[1][4];

        tempEleven = array[2][0];
        tempTwelve = array[2][1];
        tempThirteen = array[2][2];
        tempFourteen = array[2][3];
        tempFiftheen = array[2][4];

        tempSixteen = array[3][0];
        tempSeventeen = array[3][1];
        tempEighteen = array[3][2];
        tempNineteen = array[3][3];
        tempTwenty = array[3][4];

        tempTwentyone = array[4][0];
        tempTwentytwo = array[4][1];
        tempTwentytree = array[4][2];
        tempTwentyfour = array[4][3];
        tempTwentyfive = array[4][4];

        array[0][4] = temp;
        array[1][4] = tempTwo;
        array[2][4] = tempTree;
        array[3][4] = tempFour;
        array[4][4] = tempFive;

        array[0][3] = tempSix;
        array[1][3] = tempSeven;
        array[2][3] = tempEight;
        array[3][3] = tempNine;
        array[4][3] = tempTen;

        array[0][2] = tempEleven;
        array[1][2] = tempTwelve;
        array[2][2] = tempThirteen;
        array[3][2] = tempFourteen;
        array[4][2] = tempFiftheen;

        array[0][1] = tempSixteen;
        array[1][1] = tempSeventeen;
        array[2][1] = tempEighteen;
        array[3][1] = tempNineteen;
        array[4][1] = tempTwenty;

        array[0][0] = tempTwentyone;
        array[1][0] = tempTwentytwo;
        array[2][0] = tempTwentytree;
        array[3][0] = tempTwentyfour;
        array[4][0] = tempTwentyfive;

        for (int row = 0; row < 5; row++)
        {
            for (int colume = 0; colume < 5; colume++)
            {
                std::cout << array[row][colume];
            }
            std::cout << std::endl;
        }
        std::cout << "\n";
        std::cout << "========================================\n" << std::endl;
    }
    return 0;
}