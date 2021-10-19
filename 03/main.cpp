// 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>

int main()
{
    using namespace std;

    std::string name;
    int age;
    string address;
    int point;
    string hobbies;

   /* std::cin.ignore(100, '\n');*/

    cout << "Enter your name: ";
    std::getline(std::cin, name);

    cout << "Enter your age: ";
    cin >> age;
                                              
    cout << "Enter your class: ";
    cin >> address;
                                                

    cout << "Enter your hobbies: ";
    cin >> hobbies;
                                               

    cout << "Enter your math point: ";
    cin >> point;
                                                  
    
    cout << "Enter your physical point: ";
    cin >> point;
                                                     

    cout << "Enter your chemistry point: ";
    cin >> point;



    cout << "Hello my name is " << name << '\n';
    cout << "Im " << age << " years old" << '\n';
    cout << "Im from class " << address << '\n';
    cout << "My hobbies is play " << hobbies << '\n';
    cout << "Math: " << point << '\n';
    cout << "Physical: " << point << '\n';
    cout << "Chemistry: " << point << '\n';


    //float sum1 = 8 + 7 + 7.25;
    //float sum2 = sum1 / 3;
    //cout << "Diem trung binh: " << sum2 << '\n';

    //cout << "xep loai hanh kiem: Kha ";
    






}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
