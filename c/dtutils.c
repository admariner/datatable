#include "dtutils.h"


/**
 * Create and return a new instance of python's None object
 * (actually, this reuses Py_None singleton, increasing its REFCNT)
 */
PyObject* none(void) {
    Py_RETURN_NONE;
}


/**
 * Make and return a new reference for the provided PyObject
 */
PyObject* incref(PyObject *x) {
    Py_INCREF(x);
    return x;
}


/**
 * "Unmake" the provided object and return NULL
 */
PyObject* decref(PyObject *x) {
    Py_XDECREF(x);
    return NULL;
}

