#include <pybind11/pybind11.h>

namespace py = pybind11;

namespace nupic_ext
{
    void init_Engine(py::module&);
    void init_Timer(py::module&);
    void init_OS(py::module&);
} // namespace nupix_ext

using namespace nupic_ext; 

PYBIND11_MODULE(engine_internal, m) {
    m.doc() = "nupic.bindings.engine plugin"; // optional module docstring

    init_Engine(m);
    init_OS(m);
    init_Timer(m);
}
