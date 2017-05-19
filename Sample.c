#include "Sample.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

Sample newSample(int attributes, double values[], char* class) {
	Sample sample;
	sample.attributes = attributes;
	int i;
	sample.values = (double*) malloc(sizeof(double) * attributes);
	for(i = 0; i < attributes; i++)
		sample.values[i] = values[i];
	strcpy(sample.class, class);
	return sample;
}

char* getClass(const Sample* sample) {
	return sample->class;
}

double* getValues(const Sample* sample) {
	return sample->values;
}

int attributes(const Sample* sample) {
	return sample->attributes;
}

void destroySample(Sample* sample) {
	free(sample->values);
}
