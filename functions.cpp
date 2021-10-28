#include <iostream>
#include <sstream>

using std::cout;
using std::string;
using std::endl;

void show(const char str[])
{
    std::cout << "      " << str << endl;
}

void clear()
{
    system("CLS");
    cout << endl;
    show("________________________________________________________");
    show("|                                                      |");
    show("|                      FEITO POR                       |");
    show("|                     cleiton#2040                     |");
    show("|            https://github.com/cleiton2040            |");
    show("|______________________________________________________|");
    cout << endl;
}

int ask(const char str[])
{
    show(str);
    cout << "       > ";
}

const char *toString(int num)
{

    string str;

    std::stringstream ss;
    ss << num;
    ss >> str;
    const char *abc = str.c_str();
    return abc;
}

string number_to_string(double n)
{
    std::ostringstream sstream;
    sstream << n;
    return sstream.str();
}