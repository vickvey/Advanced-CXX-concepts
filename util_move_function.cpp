// Used in to-do-list-project

#include <iostream>
#include <utility>

int main() {
    // Create two objects, 'source' and 'destination'
    std::string source = "I am the source.";
    std::string destination = "I am the destination.";

    // Use std::move to transfer ownership from 'source' to 'destination'
    destination = std::move(source);

    // Now, 'destination' has the original content of 'source'
    std::cout << "After move, destination: " << destination << std::endl;

    // 'source' is left in a valid but unspecified state
    std::cout << "After move, source: " << source << std::endl;

    return 0;
}
