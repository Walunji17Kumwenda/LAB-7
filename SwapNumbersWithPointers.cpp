#include <iostream>
void SwapNumbers(int* a, int* b);//declare the function 
using namespace std;
int main()
{
    int varA = 25;
    int varB = 100;
    cout << "varA before swap: " << varA << endl; //varA is 25
    cout << "varB before swap: " << varB << endl;//var

    SwapNumbers(&varA,&varB);

    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;
    return 0;

}

void SwapNumbers(int* a , int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}