#ifndef KNNCLASSIFIER_H
#define KNNCLASSIFIER_H

#include "Sample.h"

struct knnClassifier {
	int samples;
	Sample* samplesSet;
	int index;
};

typedef struct knnClassifier KnnClassifier;

/**
 * how many samples
 */
KnnClassifier newKnnClassifier(int samples);

void destroyKnnClassifier(KnnClassifier* knn);

void addSampleToSet(KnnClassifier* knn, Sample* sample);

char* classify(Sample* sample, int neighbors);

#endif
