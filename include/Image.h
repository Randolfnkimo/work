#ifndef IMAGE_H
#define IMAGE_H
#include "nr3.h"

class Image : public NRmatrix<double> {
	public :
	Image (int nn, int mm) : NRmatrix(nn,mm){};
	
	void imread(const char * filename);
	void imwrite(const char * filename);

};

#endif
