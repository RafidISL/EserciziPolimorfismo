

#include <vector>

#include "CartaCredito.h"
#include "Contanti.h"
#include "MetodoPagamento.h"
#include "PayPal.h"

int main() {

    MetodoPagamento *metodo1 = new CartaCredito();
    MetodoPagamento *metodo2 = new PayPal();
    MetodoPagamento *metodo3 = new Contanti();

    std::vector<MetodoPagamento*> ElencoPagamenti={metodo1,metodo2,metodo3};

    for (int i = 0; i < ElencoPagamenti.size(); i++) {
        MetodoPagamento *pagamento = ElencoPagamenti[i];
        pagamento->PagaConCommissione(20,2);
    }














    return 0;
}
