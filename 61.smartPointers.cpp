#include <iostream>
#include <memory>

std::shared_ptr<int> getDataWithSharedPointer()
{
    std::shared_ptr<int> a = std::make_shared<int>(5);
    return a;
}

std::unique_ptr<int> getDataWitUniquePointer()
{
    auto a = std::make_unique<int>(5);
    return a;
}

int main(int argc, char **argv) 
{
    auto b = getDataWithSharedPointer();
    auto c = b;
    std::cout << *b << std::endl;
    std::cout << *c << std::endl;
    std::cout << b.use_count() << std::endl;
    
    std::weak_ptr weak = b; // create a weak pointer
    std::cout << b.use_count() << std::endl;

    auto shared = weak.lock(); // try to access it -> create a shared pointer from it 
    if (shared) { // checking the shared pointer
        std::cout << *shared << std::endl;
    } 


    auto d = getDataWitUniquePointer();
    auto f = std::move(d); // transfer ownership from 'd' to 'f'
    if (d) { // <- 'd' is a dead pointer now
        std::cout << *d << std::endl;
    } 
}