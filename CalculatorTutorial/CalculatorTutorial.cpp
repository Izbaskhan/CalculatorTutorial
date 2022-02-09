// CalculatorTutorial.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
using namespace std;
void hello() {
    cout <<  "Hello Concurent World \n";
}
int main()
{
    thread t(hello);
    thread t2(hello);
    t.join();
    
}
