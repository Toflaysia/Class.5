#include <iostream>
#include <string>   
using namespace std;

class Password {
public:
    string pass;

    Password() {
        this->pass = "";
    }

    Password(string pass) {
        this->pass = pass;
    }
    
    void check() {
        int length = this->pass.length();       //длина строки
        if (length <= 10) {
            cout << "Слабая степень безопасности" << endl;
        }
        if (length >= 11 && length <= 20) {
            cout << "Средняя степень безопасности" << endl;
        }
        if (length > 21) {
            cout << "Высокая степень безопасности" << endl;
        }
    }

    bool operator == (const Password& a) {
        int symbol = 0;
        if (this->pass.length() == a.pass.length()) {
            while (pass.length() != symbol + 1) {
                if (a.pass[symbol] == this->pass[symbol]) {
                    symbol++;
                }
                else {
                    return false;
                }
            }
        }
        else {
            return false;
        }
    }

    bool operator != (const Password& a) {
        int symbol = 0;
        if (this->pass.length() == a.pass.length()) {
            while (pass.length() != symbol + 1) {
                if (a.pass[symbol] == this->pass[symbol]) {
                    symbol++;
                }
                else {
                    return true;
                }
            }
        }
        else {
            return true;
        }
    }
};


int main()
{
    setlocale(LC_ALL, "RU");

    Password a("12345678910");
    Password b("11111111111");
    a.check();
    b.check();
    cout << (a == b) << endl;
    cout << (a != b) << endl;


    return 0;
}
