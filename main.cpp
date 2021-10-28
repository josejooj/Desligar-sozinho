#include <iostream>
#include "functions.cpp"
#include <string>

using std::cin;
using std::endl;
using std::string;

string toshow = " ";

int main()
{

    int menu_principal = 0;

    do
    {
        clear();
        show(toshow.c_str());
        show(" Escolha uma das opcoes abaixo:");
        show("");
        show(" [0] - Sair do programa");
        show(" [1] - Cancelar desligamento");
        show(" [2] - Planejar o desligamento");
        cout << "      > ";
        cin >> menu_principal;
        clear();
        toshow = " ";
        if (menu_principal == 1)
        {
            system("shutdown -a");
            toshow = " Desligamento cancelado com sucesso.\n";
        }
        else if (menu_principal == 2)
        {
            toshow = " Um desligamento foi programado para daqui a";
            int total = 0;
            int valores[4] = {0, 0, 0, 0};
            string valores_s[4] = {"dias", "horas", "minutos", "segundos"};
            for (int i = 0; i < 4; i++)
            {
                cout << "       "
                     << "O computador deve ser desligado em quantos " << valores_s[i] << '?' << endl
                     << "     > ";
                cin >> valores[i];
                toshow += ", " + number_to_string(valores[i]) + " " + valores_s[i];
                if (valores_s[i] == "dias")
                    valores[i] *= 86400;
                if (valores_s[i] == "horas")
                    valores[i] *= 3600;
                if (valores_s[i] == "minutos")
                    valores[i] *= 60;
                total += valores[i];
                clear();
            }
            string input = (string) "shutdown -s -t " + number_to_string(total);
            system(input.c_str());
            toshow += "\n";
        }
    } while (menu_principal != 0);
}