#include "common.h"
#include "energy_const.h"
typedef struct {
  int id;
  int stack[NBPAIRS+1][NBPAIRS+1];
  int hairpin[31];
  int bulge[MAXLOOP+1];
  int internal_loop[MAXLOOP+1];
  int mismatchI[NBPAIRS+1][5][5];
  int mismatchH[NBPAIRS+1][5][5];
  int mismatchM[NBPAIRS+1][5][5];
  int dangle5[NBPAIRS+1][5];
  int dangle3[NBPAIRS+1][5];
  int int11[NBPAIRS+1][NBPAIRS+1][5][5];
  int int21[NBPAIRS+1][NBPAIRS+1][5][5][5];
  int int22[NBPAIRS+1][NBPAIRS+1][5][5][5][5];
  int F_ninio[5];
  double lxc;
  int MLbase;
  int MLintern[NBPAIRS+1];
  int MLclosing;
  int TerminalAU;
  int DuplexInit;
  int TETRA_ENERGY[200];
  char Tetraloops[1401];
  int Triloop_E[40];
  char Triloops[241];
  double temperature;
}  paramT;

CPPEXTERN paramT *scale_parameters(void);
CPPEXTERN paramT *copy_parameters(void);
CPPEXTERN paramT *set_parameters(paramT *dest);

typedef struct {
  int id;
  double expstack[NBPAIRS+1][NBPAIRS+1];
  double exphairpin[31]; 
  double expbulge[MAXLOOP+1];
  double expinternal[MAXLOOP+1];
  double expmismatchI[NBPAIRS+1][5][5];
  double expmismatchH[NBPAIRS+1][5][5];
  double expmismatchM[NBPAIRS+1][5][5];
  double expdangle5[NBPAIRS+1][5];
  double expdangle3[NBPAIRS+1][5];
  double expint11[NBPAIRS+1][NBPAIRS+1][5][5];
  double expint21[NBPAIRS+1][NBPAIRS+1][5][5][5];
  double expint22[NBPAIRS+1][NBPAIRS+1][5][5][5][5];
  double expninio[5][MAXLOOP+1];
  double lxc;
  double expMLbase; 
  double expMLintern[NBPAIRS+1];
  double expMLclosing;
  double expTermAU;
  double expDuplexInit;
  double exptetra[40];
  char Tetraloops[1401];
  double expTriloop[40];
  char Triloops[241];
  double temperature;
}  pf_paramT;
 
CPPEXTERN pf_paramT *scale_pf_parameters(void);
CPPEXTERN pf_paramT *copy_pf_param(void);
CPPEXTERN pf_paramT *set_pf_param(paramT *dest);
 
