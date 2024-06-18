# FFT Library for STM32

This library provides FFT (Fast Fourier Transform) functionality using ARM CMSIS-DSP library for STM32 microcontrollers.

## Features
* FFT Calculation: Performs Real FFT (RFFT) on input data.
* Magnitude Calculation: Computes magnitude spectrum from FFT output.
* Frequency Calculation: Determines dominant frequency component from FFT output.

## Requirment
* STM32CubeIDE: Development environment for STM32 microcontrollers.
* ARM CMSIS-DSP Library: Integrated for FFT and signal processing functions.
* Development Board: STM32 development board compatible with STM32CubeIDE.

## Installation
* Clone this repository or download the source files (fft_library.h and fft_library.c).
* Add fft_library.h and fft_library.c to your STM32CubeIDE project.
* Ensure ARM CMSIS-DSP library is included and configured in your project settings.

## Usage
**Initialization
1. Include "fft_library.h" in your main application file (main.c).
2. Initialize the FFT library and necessary variables:

```c
// Example initialization in main.c
#include "fft_library.h"

int main(void) {
    // Initialize FFT library and other peripherals
    // Initialize STM32 peripherals, e.g., ADC for data acquisition
    // Call any necessary initialization functions for ARM CMSIS-DSP library
}
```

## Performing FFT
To perform FFT on a buffer of data:

```c
// Example usage in main.c
#include "fft_library.h"

// Define buffer for FFT input (must be of size FFT_SIZE * 2)
uint16_t buffer_input[FFT_SIZE * 2];

int main(void) {
    // Perform FFT on buffer_input
    RFFT_perform(buffer_input);

    // Access frequency result through 'freq' variable
    // 'freq' will hold the dominant frequency component detected
}
```

## Notes
* Ensure buffer_input is properly populated with sampled data before calling RFFT_perform.
* Adjust SAMPLE_RATE and FFT_SIZE macros in fft_library.h according to your specific application requirements.
