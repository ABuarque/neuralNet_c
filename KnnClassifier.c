#include "KnnClassifier.h"
#include "Sample.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define DEBUG if(1)

//private functions (user don not need to know them)
float getDistance(const Sample* s1, const Sample* s2);
int sampleSetSize(const KnnClassifier* knn);

KnnClassifier newKnnClassifier(int samples) {
	KnnClassifier knn;
	knn.samples = samples;
	knn.samplesSet = (Sample*) malloc(sizeof(Sample) * samples);
	knn.index = 0;
	return knn;
}

void destroyKnnClassifier(KnnClassifier* knn) {
	int i;
	const int SAMPLES = sampleSetSize(knn);
	for(i = 0; i < SAMPLES; i++)
		destroySample(&knn->samplesSet[i]);
	free(knn->samplesSet);
}

void addSampleToSet(KnnClassifier* knn, Sample* sample) {
	//add exception checker here to check if 
	//samplesSet is full
	knn->samplesSet[knn->index] = *sample;
	knn->index++;
}

char* classify(Sample* sample, int neighbors) {
	
}

int sampleSetSize(const KnnClassifier* knn) {
	return knn->samples;
}

float getDistance(const Sample* s1, 
					const Sample* s2) {
	float sum = 0;
	const int ATTRIBUTES_SIZE = attributes(s1);
	int i;
	for(i = 0; i < ATTRIBUTES_SIZE; i++)
		sum += pow(getValues(s1)[i] - getValues(s2)[i], 2);
	return (float) sqrt(sum);
}
