#include <iostream>
#include <sstream>

using std::cout;
using std::string;

void clear()
{
    system("CLS");
    cout << "\n\n";
}

void show(const char str[])
{
    std::cout << "      " << str << endl;
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