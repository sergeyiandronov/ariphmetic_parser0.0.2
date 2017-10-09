#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string str;
    double a, b;
    char com;
    getline(cin, str);
    istringstream stream(str);
    stream >> a;
    while (stream >> com)
    {switch(com) {
            case '+':
                stream >> b;
                a = a+ b;
                break;
            case '-':
                stream >> b;
                a = a- b;
                break;
            case '*':
                stream >> b;
                a = a * b;
                break;
            case '/':
                stream >> b;
                a = a / b;
                break;
            }
        }

    cout << a;
    return 0;

}
