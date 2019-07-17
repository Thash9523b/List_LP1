#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>
using namespace std;

class Pagamento
{
    public:

        Pagamento();

        void setVpagamento(double valorPagamento);
        void setNfuncionario(string nomeFuncionario);

        double getVpagamento();
        string getNfuncionrio();

    protected:

    private:
        double valorPagamento;
        string nomeFuncionario;
};

#endif // PAGAMENTO_H
