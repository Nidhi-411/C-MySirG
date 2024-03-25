#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("myfile.dat");
    getch();
    fout<<"hello";
    getch();
    fout.close();
    getch();
}
