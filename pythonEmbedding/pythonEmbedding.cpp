
// to compile
// g++ -lpython pythonEmbedding.cpp

#include <python2.7/Python.h>
#include <iostream>

using namespace std;
int main(void){

   PyObject *pName, *pModule, *pDict, *pFunc, *pValue, *pKeys, *pArgs;

    // Initialize the Python Interpreter
   	Py_SetProgramName("EmbeddingTest");
    Py_Initialize();

    PyRun_SimpleString("print 'This is a Embedding test with python'");

    // Build the name object
    pName = PyString_FromString("chikashi");
    PySys_SetPath(".");
    pModule = PyImport_Import(pName);

    pFunc = PyObject_GetAttrString(pModule, "averageOfTwo");

    if(!pFunc){
    	cout << "failed to get pFunc. will abort" << endl;
        PyErr_Print();
        Py_Finalize();
    	return 1;
    }

    if (PyCallable_Check(pFunc))
    {
    	pArgs =PyTuple_New(2);
    	PyTuple_SetItem(pArgs, 0, PyFloat_FromDouble(22.4));
    	PyTuple_SetItem(pArgs, 1, PyFloat_FromDouble(93.2));


        cout << "average of two number:" << PyFloat_AsDouble(PyObject_CallObject(pFunc, pArgs)) << endl;
    } else {
        PyErr_Print();
    }

    Py_DECREF(pName); // we no longer need pName
    Py_DECREF(pModule);
	return 0;
}