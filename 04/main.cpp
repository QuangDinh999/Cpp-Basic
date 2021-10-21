// 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>


int main()
{
    using namespace std;
    std::string name;
    int age;
    string address;
    string hobbies;
    int score1;
    int score2;
    int score3;
    string rank;



    cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your class: ";
    cin >> address;
    
    cout << "Enter your hobbies: ";
    cin >> hobbies;
   
    cout << "math score: ";
    cin >> score1;
   
    cout << "physical score: ";
    cin >> score2;
   
    cout << "chemistry score: ";
    cin >> score3;
       
    float sum1 = score1 + score2 + score3 ;
    float sum2 = sum1 / 3;
   
    cout << "Rank: ";
    cin >> rank;
    

    cout << "Hello my name is: " << name << '\n';
    cout << "Im " << age << " years old" << '\n';
    cout << "Im from " << address << '\n';
    cout << "My hobbies is " << hobbies << '\n';
    cout << "math score: " << score1 << '\n';
    cout << "physical score: " << score2 << '\n';
    cout << "chemistry score: " << score3 << '\n';
    cout << "dtb: " << sum2 << '\n';
    cout << "rank: " << rank << '\n';


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
