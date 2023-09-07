#include <iostream>
#include <thread>

using namespace std;

class Singleton
{
    static Singleton* _singleton;

    Singleton()
    {
    }
public:
    /*
        You can face serious problems if you use multithreading.

        1) If this method doesn't take too much time,
        you should do nothing and don't multithreading for this method.

        2) You can instantiate the instance before using multithreading.

        3) If your application always uses Singleton,
        you can instantiate it directly in the class.

        Remember, If this class has a big impact on performance and memory
        and your application not always uses the instance,
        you sould instantiate the instance in a method.

        4) You can wrap the part of code that instantiates the instance.
        But it takes much more performance
    */
    static Singleton* GetInstance()
    {
        // You should make this condition and instantiation only 
        // if your class has a big impact on performace and memory
        if(_singleton == nullptr)
            _singleton = new Singleton();
        return _singleton;
    }
};
Singleton* Singleton::_singleton = nullptr;

int main()
{
}