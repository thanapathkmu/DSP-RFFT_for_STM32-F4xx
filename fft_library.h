#ifndef FFT_LIBRARY_H
#define FFT_LIBRARY_H

#include <stdint.h>

#define FFT_SIZE 4096
#define SAMPLE_RATE 8000 // 8 kHz sampling rate

extern float freq;

void RFFT_perform(uint16_t *buffer);

#endif /* FFT_LIBRARY_H */
