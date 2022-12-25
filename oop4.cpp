#include <iostream>
#include "Money.h"
enum actions
{
     sum, del, mult, print, end
};
int main()
{
	Money q;
    bool stop = false;
    int choice;
    std::cin >> q;
    double r,m;
    Money  s;

    std::cout << " 0 - sum 1 - del 2 - mult 3 - print  4 - end  " << std::endl;
    while (!stop) {
        std::cout << " Select action : ";
        std::cin >> choice;
        switch (choice) {
       
        case actions::sum:
            std::cout << " enter added Money" << std::endl;
            std::cin >> s;
            q.operator+(s);
            std::cout << " result :\n " << q << std::endl;
            break;
        case actions::del:
            std::cout << " enter del" << std::endl;
            std::cin >> r;
            q.delen(r);
            std::cout << " result :\n" << q << std::endl;
            break;
        case actions::mult:
            std::cout << " enter multiplaer" << std::endl;
            std::cin >> m;
            q.operator*(m);
            std::cout << " result :\n" << q << std::endl;
            break;
        case actions::print:
            std::cout << q;
            break;
        case actions::end:
            std::cout << "bye!";
            stop = true;
            break;
        }
    }
}



