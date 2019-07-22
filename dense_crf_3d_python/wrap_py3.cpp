#include "dense_crf3d.cpp"

static struct PyModuleDef sDenseCRF = 
{
    PyModuleDef_HEAD_INIT,
    "dense_crf3d", /* name of module */
    "",          /* module documentation, may be NULL */
    -1,          /* size of per-interpreter state of the module, or -1 if the module keeps state in global variables. */
    Methods
};


PyMODINIT_FUNC PyInit_dense_crf3d(void) {
    import_array();
    return PyModule_Create(&sDenseCRF);
}