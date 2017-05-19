#ifndef KNNCLASSIFIER_H
#define KNNCLASSIFIER_H

#include "Sample.h"

struct knnClassifier {
	int samples;
	Sample* samplesSet;
};

typedef struct knnClassifier KnnClassifier;

/**
 * how many samples
 */
KnnClassifier newKnnClassifier(int samples);

void destroyKnnClassifier(KnnClassifier* knn);

int sampleSetSize(const KnnClassifier* knn);

#endif
