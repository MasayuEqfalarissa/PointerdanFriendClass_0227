#include <iostream>
using namespace std;

class mahasiswa 
{
public:
    int nim;
    void shownim()
    {
        cout << "no induk = " << nim << endl;
    }
};


int main () 
{
    mahasiswa mhs; // object mhs
    mhs.nim = 2024;
    mhs.shownim(); // member access operator 

    mahasiswa &refmhs = mhs; // pointer reference refmhs
    refmhs.nim = 2;
    mhs.shownim();

    mahasiswa *pmhs = &mhs;//pointer dereference pmhs;
    pmhs -> nim =3;
    pmhs ->shownim ();
    return 0;

}