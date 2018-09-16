#include "Greeter.h"
#include <string>
using namespace std;

const string Greeter::sayHello(string name) {
    return MESSAGE_PREFIX + name;
}
