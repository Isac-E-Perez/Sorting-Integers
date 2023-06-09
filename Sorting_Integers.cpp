#include <algorithm>
#include <iostream>
#include <istream>
#include <ostream>
#include <vector>

int main()
{
    std::vector<int> data;      // initialized to be empty
    int x(0);

    // Read integers one at a time. 
    while (std::cin >> x)
        // Store each integer in the vector.
        data.push_back(x);

    // Sort the vector.
    std::sort(data.begin(), data.end());

    // Print the vector, one number per line.
    for (std::vector<int>::size_type i(0); i != data.size(); i = i + 1)
        std::cout << data.at(i) << '\n';
}
