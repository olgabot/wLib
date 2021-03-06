#include "common.h"
/* routines from PS_dot.c */
CPPEXTERN int PS_rna_plot(char *string, char *structure, char *file);
/* write PostScript drawing of structure to file */
CPPEXTERN int PS_rna_plot_a(char *string, char *structure, char *file, char *pre, char *post);
/* write PostScript drawing of structure to file with annotation */
CPPEXTERN int gmlRNA(char *string, char *structure, char *ssfile, char option);
/* structure drawing in gml */
CPPEXTERN int ssv_rna_plot(char *string, char *structure, char *ssfile);
/*write coord file for SStructView */
CPPEXTERN int svg_rna_plot(char *string, char *structure, char *ssfile);
/*write RNAplot in SVG */
CPPEXTERN int xrna_plot(char *string, char *structure, char *ssfile);
/*write .ss file for further editing in XRNA */
CPPEXTERN int PS_dot_plot(char *string, char *file);
/* produce a PostScript dot plot of the pair probability matix */
CPPEXTERN int rna_plot_type;   /* 0= simple coordinates, 1= naview */

typedef struct cpair {
  int i,j,mfe;
  float p, hue, sat;
} cpair;
CPPEXTERN int PS_color_dot_plot(char *string, cpair *pi, char *filename);
CPPEXTERN int PS_color_dot_plot_turn(char *seq, cpair *pi, char *filename, int winSize);

typedef struct plist {
  int i;
  int j;
  float p;
}plist;
CPPEXTERN int PS_dot_plot_list(char *seq, char *filename, struct plist *pl,
			    struct plist *mf, char *comment);
CPPEXTERN int PS_dot_plot_turn(char *seq, struct plist *pl, char *filename,
			    int winSize);
CPPEXTERN int PS_color_aln(const char *structure, const char *filename, 
			const char *seqs[], const char *names[]);
