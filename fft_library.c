#include "fft_library.h"
#include "arm_math.h" // Include ARM CMSIS-DSP library for FFT functions

// Static variables defined in the original code
static uint16_t buffer_input[FFT_SIZE * 2];
static float rfft_signal[FFT_SIZE * 2];
static float magnitude_signal[FFT_SIZE];
static float maxValue = 0;
static uint32_t maxIndex;
static float stackPIEZO[FFT_SIZE];

// FFT configuration structures
static arm_rfft_instance_q15 fftConfig;
static arm_rfft_fast_instance_f32 fft;

void RFFT_perform(uint16_t *buffer) {
    // Initialize FFT if needed (not necessary to reinitialize each call in general)
    // arm_rfft_fast_init_f32(&fft, FFT_SIZE);

    // Perform FFT
    arm_rfft_fast_f32(&fft, buffer, rfft_signal, 0);

    // Calculate magnitude
    arm_cmplx_mag_f32(rfft_signal, magnitude_signal, FFT_SIZE / 2);

    // Find the max value and index
    arm_max_f32(magnitude_signal + 1, ((FFT_SIZE / 2) - 1), &maxValue, &maxIndex);

    // Calculate the frequency
    freq = ((maxIndex) * ((float) SAMPLE_RATE / FFT_SIZE));
}
