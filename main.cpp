#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int random3digit(int &x, int &y, int &z);



int main()
{
    int secretCode1 = 0, secretCode2 = 0, secretCode3 = 0;
    random3digit(secretCode1, secretCode2, secretCode3);
    cout << secretCode1 << secretCode2 << secretCode3 << endl;

    cout<<"Welcome to Mastermind!">> endl;




    return 0;
}


//
//
int random3digit(int &x, int &y, int &z)
{
    srand(time(NULL));
    x = rand() % 10;
    y = rand() % 10;
    z = rand() % 10;

    return 0;

}