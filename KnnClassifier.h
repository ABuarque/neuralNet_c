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

float getDistance(const Sample* s1, const Sample* s2);

char* classifySample(int neighbors );

void destroyKnnClassifier(KnnClassifier* knn);

#endif
