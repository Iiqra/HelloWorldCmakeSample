#include "Speaker.h"

using namespace Hello;
using namespace std;

namespace Hello {
  void Speaker::sayHello() {
    cout << "Hello, world!\nDisclaimer: The program uses cppzmq from vcpkg library as its dependencies";
  }
}
