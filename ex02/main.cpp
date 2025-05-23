
#include "MutantStack.hpp"

int main() {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl; // Stampa il top: 17

    mstack.pop(); // Rimuove 17

    std::cout << mstack.size() << std::endl; // Dovrebbe stampare 1

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    // [...]: puoi aggiungere altri elementi qui, se vuoi
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    // Copia MutantStack in uno stack standard
    std::stack<int> s(mstack);

    return 0;
}
