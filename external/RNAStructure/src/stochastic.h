#if !defined(STOCHASTIC_H)
#define STOCHASTIC_H

#include "structure.h"
#include "pfunction.h"

#ifdef _WINDOWS
#include "../RNAstructure_windows_interface/TProgressDialog.h"
#else

#ifdef _JAVA_GUI
#include "../RNAstructure_java_interface/SWIG/TProgressDialog.h"
#else
#include "TProgressDialog.h"
#endif // JAVA GUI

#endif //WINDOWS    

//prototype stochastic traceback

//stochastic sampling of structures, enter from reading a partition function save file.
	//ct is an instance of structure that will contain the sampled structures
	//savefilename is the name of a partition function save file to be read from disk
	//numberofstructures is the number of structures to be sampled
	//randomseed seeds the random number generator
	//progress is used to track the progress of the calculation
void stochastic(structure *ct, char *savefilename, int numberofstructures, int randomseed=1000, TProgressDialog *progress=NULL); 

//stochastic sampling of structures, enter with partition function data prepared.
	//return an int that is zero with no errors and non-zero when errors occur.  These error codes work with the RNA class.
		//14 = traceback error.
		//21 = probabilities sum to > 1.
int stochastictraceback(pfunctionclass *w,pfunctionclass *wmb,pfunctionclass *wmbl,pfunctionclass *wcoax,pfunctionclass *wl,pfunctionclass *v,
	forceclass *fce, PFPRECISION *w3,PFPRECISION *w5,PFPRECISION scaling, bool *lfce, bool *mod, pfdatatable *data, int numberofstructures, 
	structure *ct, int randomseed = 1000, TProgressDialog *progress=NULL );


#endif
