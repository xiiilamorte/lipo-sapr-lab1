#include "../Greeter.h"

static const char *const TEST_USER_NAME = "Valera";

static const char *const EXPECTED_RESULT = "Hello, Valera";

int main() {
    Greeter greeter;
    const string &result = greeter.sayHello(TEST_USER_NAME);
    if (result == EXPECTED_RESULT) {
        return 0;
    } else {
        return 1;
    }
}