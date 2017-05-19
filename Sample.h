#ifndef SAMPLE_H
#define SAMPLE_H

struct sample {
	char class[101];
	double* values;
	int attributes;
};

typedef struct sample Sample;

/**
 * Number of attributes to check
 * set with values
 * name classification
 */
Sample newSample(int attributes, double values[], char* class);

char* getClass(const Sample* sample);

float* getValues(const Sample* sample);

int attributes(const Sample* sample);

void destroySample(Sample* sample);

#endif
