#include <stdio.h>
#include <pybind11/pybind11.h>


void dostuff() {
  printf("It's a sunny day out here...\n");
}


namespace py = pybind11;
PYBIND11_MODULE(example, m) {
    m.def("dostuff", &dostuff, R"pbdoc(Does some stuff.)pbdoc");
}
