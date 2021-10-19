// 02-io-var-types-operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>

using namespace std;
int main()
{
   /* cout << "Hello my name is Dinh Hung Quang\n";
    cout << "Im 18 years old" << '\n';
    cout << "Im from ha noi\n";*/
   
      std:: string name;
      int age;
      string address;

      /*cout << "Enter your name: ";
      std::getline(std::cin, name);

      cout << "Enter your age: ";
      cin >> age;

      cout << "Enter your address: ";
      std::cin.ignore(100, '\n');
      std::getline(std::cin, address);

      cout << "Hello my name is: " << name << '\n';
      cout << "Im " << age << " years old" << '\n';
      cout << "Im from " << address << '\n';*/





      //cout << "Enter your name: ";
      //std::getline(std::cin, name);

      //cout << "Enter your address: ";
      //std::getline(std::cin, address);
      ///*std::cin.ignore(100, '\n');*/

      //cout << "Hello my name is: " << name << '\n';
      //cout << "Im from " << address << '\n';









      cout << "enter your name: ";
      /*cin >> name;*/
      std::getline(std::cin, name);
      

      cout << "enter your age: ";
      cin >> age;
      
      // ignore newline
      std::cin.ignore(100, '\n');
       
      cout << "enter address: ";
      /*cin >> address;*/
      std::getline(std::cin, address);

      
 
      
      cout << "hello my name is " << name << '\n';
      cout << "Im " << age << " years old" << '\n';
      cout << "Im from " << address << '\n';



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
