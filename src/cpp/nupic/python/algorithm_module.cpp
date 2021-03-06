#include <pybind11/pybind11.h>

namespace py = pybind11;

namespace nupic_ext
{
    void init_algorithms(py::module&);
    void init_Cells4(py::module&);
    void init_HTM(py::module&);
    void init_SDR_Classifier(py::module&);
    void init_Spatial_Pooler(py::module&);
    void init_SVM(py::module&);

} // namespace nupix_ext

using namespace nupic_ext; 

PYBIND11_MODULE(algorithms, m) {
    m.doc() = "nupic.bindings.algorithms plugin"; // optional module docstring

    init_algorithms(m);
    init_HTM(m);
    init_SVM(m);
    init_Cells4(m);
    init_SDR_Classifier(m);
    init_Spatial_Pooler(m);
}
