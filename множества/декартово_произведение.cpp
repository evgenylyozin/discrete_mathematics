
/* 
* Декартовым (прямым) произведением множеств A 1 , A 2 , . . ., A n называ-
*ется множество {(x 1 , x 2 , . . . , x n ) | x 1 ∈ A 1 , x 2 ∈ A 2 , . . . , x n ∈ A n }
*/

#include <iostream>
#include <set>

int main()
{
    std::set <int> s1;
    std::set <int> s2;

    int length_s1, length_s2, temp, temp2;
    temp2 = 0;
    std::cout << "Укажите длину первого множества:\n";
    std::cin >> length_s1;
    std::cout << "Укажите длину второго множества:\n";
    std::cin >> length_s2;

    int result1[length_s1*length_s2][2];
    int result2[length_s1*length_s2][2];

    std::cout << "Введите " << length_s1 << " чисел по очереди, нажимая enter после каждого:\n";
    
    for (int i=0;i<length_s1;i++) 
    {
        std::cin >> temp;
        s1.insert(temp);
    }

    std::cout << "Вы заполнили первое множество, выглядит оно так:\n";

    std::cout << "{ ";
    for (auto num : s1) 
    {
        std::cout<< num << ", "; 
    }
    std::cout << "}\n";


    std::cout << "Введите " << length_s2 << " чисел по очереди, нажимая enter после каждого:\n";
    
    for (int i=0;i<length_s2;i++) 
    {
        std::cin >> temp;
        s2.insert(temp);
    }
    

    std::cout << "Вы заполнили второе множество, выглядит оно так:\n";
    std::cout << "{ ";
    for (auto num : s2) 
    {
        std::cout << num << ", "; 
    }
    std::cout << "}\n";


    for (auto num1 : s1) 
    {
        for (auto num2 : s2) 
        {
            result1[temp2][0] = num1;
            result1[temp2][1] = num2;
            temp2++;
        }
    }

    temp2 = 0;

    for (auto num2 : s2) 
    {
        for (auto num1 : s1) 
        {
            result2[temp2][0] = num2;
            result2[temp2][1] = num1;
            temp2++;
        }
    }

    temp2 = 0;


    std::cout << "Результат декартового произведения 1-го множества на 2-е:\n";
    std::cout << "{ ";
    for (int i=0;i<length_s1*length_s2;i++) 
    {
        std::cout << "("<< result1[i][0] << ", " << result1[i][1]<< "),";
    }
    std::cout << "}\n";

    std::cout << "Результат декартового произведения 2-го множества на 1-е:\n";
    std::cout << "{ ";
    for (int i=0;i<length_s1*length_s2;i++) 
    {
        std::cout << "("<< result2[i][0] << ", " << result2[i][1]<< "),";
    }
    std::cout << "}\n";

}