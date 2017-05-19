#include "KnnClassifier.h"
#include "Sample.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define DEBUG if(1)

KnnClassifier newKnnClassifier(int samples) {
	KnnClassifier knn;
	knn.samples = samples;
	knn.samplesSet = (Sample*) malloc(sizeof(Sample) * samples);
	return knn;
}

float getDistance(const Sample* s1, 
					const Sample* s2) {
	float sum = 0;
	const int ATTRIBUTES_SIZE = attributes(s1);
	int i;
	for(i = 0; i < ATTRIBUTES_SIZE; i++)
		sum += getValues(s1)[i] + getValues(s2)[i];
	return (float) sqrt(sum);
}
