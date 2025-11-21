#include <vector>
#include <iostream>

int main() {

    std::vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    primes.push_back(13);
    primes.push_back(17);
    primes.push_back(19);
    primes.push_back(23);
    primes.push_back(29);
    primes.push_back(31);
    primes.push_back(37);
    primes.push_back(41);
    primes.push_back(43);
    primes.push_back(47);
    primes.push_back(53);
    primes.push_back(59);
    primes.push_back(61);
    primes.push_back(67);
    primes.push_back(71);
    primes.push_back(73);
    primes.push_back(79);
    primes.push_back(83);
    primes.push_back(89);
    primes.push_back(97);

    std::cout << "primes number of elements: " << primes.size() << std::endl;
    std::cout << "primes 5th element: " << primes[5] << std::endl;
    primes[5] = 10001;
    std::cout << "primes 5th element (after change): " << primes[5] << std::endl;
    primes.pop_back();
    std::cout << "primes number of elements (after pop): " << primes.size() << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}