#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class dhtModel {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[0] <= 80.04999923706055) {
                            return 1;
                        }

                        else {
                            return 0;
                        }
                    }

                protected:
                };
            }
        }
    }