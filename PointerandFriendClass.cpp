#include <iostream>
using namespace std;

int main ()
{
    //dereference 
    int a = 10;
    int b = 6;
    int y = 20;
    int *c = &a;
    cout << "alamat memori : " << c << endl;
    cout << "nilai dari c : " << *c << endl;
    c = &y;
    cout << "alamat memori : " << c << endl;
    cout << "nilai dari c : " << *c << endl;
   
    //reference 
    int &d = b;
    cout << "nilai " << d << endl;
    cout << "reference "<< &d << endl;

    int f = 5;
    int g = f;
   
}
