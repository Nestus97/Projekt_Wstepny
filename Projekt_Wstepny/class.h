#include <iostream>

using namespace std;

class Person
{
private:
    string name_;
    string surname_;
    string alias_;
public:
    WhoAreYou(); //pyta o dane osoby
    ChangeVowel(); //zmienia samogloski na 'z'
    Write(); //wypisuje osobe

};
