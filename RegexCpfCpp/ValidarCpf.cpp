#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

void setCpf(string& cpf);
bool cpfValidate(const string& cpf);
void cpfFormat(string& cpf);
string getCpf(const string& cpf);

int main() {
    string cpf;

    cout << "Regex para validar cpf" << endl;
    setCpf(cpf);

    if (cpfValidate(cpf)) {
        cpfFormat(cpf);
        cout << "O CPF informado e formatado foi: " << getCpf(cpf) << endl;
    }

    return 0;
}

void setCpf(string& cpf) {
    cout << "Digite o CPF (somente números): ";
    cin >> cpf;
}

void cpfFormat(string& cpf) {
    cpf = cpf.substr(0, 3) + "." + cpf.substr(3, 3) + "." + cpf.substr(6, 3) + "-" + cpf.substr(9, 2);
}

string getCpf(const string& cpf) {
    return cpf;
}

bool cpfValidate(const string& cpf) {
    if (cpf.length() != 11) {
        cout << "CPF inválido: deve conter exatamente 11 dígitos." << endl;
        return false;
    }

    for (char c : cpf) {
        if (!isdigit(c)) {
            cout << "CPF inválido: deve conter apenas números." << endl;
            return false;
        }
    }

    cout << "CPF válido!" << endl;
    return true;
}

