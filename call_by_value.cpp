//Name: Siddhant Bedre
//PRN: 23070123037
//Aim: To use call by value.
#include <iostream>
#include<string>
using namespace std;

void swap(int x , int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main() {
    int a = 5, b = 2;
    swap(a,b);
    cout << "Value of the a is:" << a<<endl;
    cout << "Value of the b is:" << b<<endl;
    return 0;
}

/* OUTPUT
Value of the a is:5
Value of the b is:2
*/
