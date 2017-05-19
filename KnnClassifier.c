#include "KnnClassifier.h"
#include "Sample.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define DEBUG if(1)

//private functions (user don not need to know them)
float getDistance(const Sample* s1, const Sample* s2);

KnnClassifier newKnnClassifier(int samples) {
	KnnClassifier knn;
	knn.samples = samples;
	knn.samplesSet = (Sample*) malloc(sizeof(Sample) * samples);
	knn.index = 0;
	return knn;
}

int sampleSetSize(const KnnClassifier* knn) {
	return knn->samples;
}

void destroyKnnClassifier(KnnClassifier* knn) {
	int i;
	const int SAMPLES = sampleSetSize(knn);
	for(i = 0; i < SAMPLES; i++)
		destroySample(&knn->samplesSet[i]);
	free(knn->samplesSet);
}

void addSamplesToSet(Sample sample) {

}

char* classify(Sample sample, int neighbors) {
	
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
