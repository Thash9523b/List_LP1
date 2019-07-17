#include "Pagamento.h"
#include <string>
using namespace std;

        Pagamento::Pagamento(){};

        void Pagamento::setVpagamento(double valorPagamento){
            this->valorPagamento = valorPagamento;
        }
        void Pagamento::setNfuncionario(string nomeFuncionario){
            this->nomeFuncionario=nomeFuncionario;
        }

        double Pagamento::getVpagamento(){
            return valorPagamento;
        }
        string Pagamento::getNfuncionrio(){
            return nomeFuncionario;
        }
