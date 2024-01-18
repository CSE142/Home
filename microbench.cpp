#include <cstdlib>
#include <unistd.h>
#include <unordered_set>
#include<algorithm>
#include<cstdint>
#include"cfiddle.hpp"


#define CLINK extern "C"
#define OPT(a) __attribute__(a)

extern "C" uint64_t * baseline_int(unsigned long int size, uint reps) {
	uint64_t * array = new uint64_t[size]();
	for(uint i = 0; i < size; i++) {
		array[i] = 0;
	}
	start_measurement();
	for(uint r = 0 ; r < reps; r++) {
		for (uint j = 0; j < 3; j++) {
			for(uint i= 1 ; i < size; i++) {
				array[i] += i/(1+j)+array[(i * reps) % size];
			}
		}
	}
	end_measurement();
	return array;
}

extern "C" uint64_t *__attribute__ ((optimize(4))) baseline_int_O4 (unsigned long int size,  uint reps) {
	uint64_t * array = new uint64_t[size]();
	for(uint i = 0; i < size; i++) 
		array[i] = 0;

	start_measurement();
	for(uint r = 0 ; r < reps; r++) {
		for (uint j = 0; j < 3; j++) {
			for(uint i= 1 ; i < size; i++) {
				array[i] += i/(1+j)+array[(i * reps) % size];
			}
			
		}
	}
	end_measurement();
	return array;
}

extern "C" double *baseline_double(unsigned long int size,  uint reps) {
	double * array = new double[size]();
	for(uint i = 0; i < size; i++) {
		array[i] = 0;
	}

	start_measurement();
	for(uint r = 0 ; r < reps; r++)
		for (double j = 0; j < 3; j++) {
			for(uint i= 1 ; i < size; i++) {
				array[i] += i/(1+j)+array[(i * reps) % size];
			}
		}
	end_measurement();
	return array;
}

extern "C" uint64_t *baseline_float(unsigned long int size,  uint reps) {

	float * array = new float[size]();
	for(uint i = 0; i < size; i++) {
		array[i] = 0;
	}

	start_measurement();
	for(uint r = 0 ; r < reps; r++) 
		for (double j = 0; j < 3; j++) {
			for(uint i= 1 ; i < size; i++) {
				array[i] += i/(1+j)+array[(i * reps) % size];
			}
		}
	end_measurement();
	return (uint64_t*)array;
}

extern "C" uint64_t *baseline_char(unsigned long int size,  uint reps) {

	char * array = new char[size]();
	for(uint i = 0; i < size; i++) {
		array[i] = 0;
	}

	start_measurement();
	for(uint r = 0 ; r < reps; r++) 
		for (double j = 0; j < 3; j++) {
			for(uint i= 1 ; i < size; i++) {
				array[i] += i/(1+j)+array[(i * reps) % size];
			}
		}
	end_measurement();
	return (uint64_t*)array;
}



volatile int ROW_SIZE = 1024;
 extern "C" uint64_t *__attribute__ ((optimize(4))) matrix_column_major(unsigned long int size, uint reps) {
#define ROW_SIZE 1024
	double * array = new double[size]();

	start_measurement();

	for(uint r = 0 ; r < reps; r++) 
		for (int k = 0; k < ROW_SIZE; k++) {
			for(uint i= 0 ; i < size/ROW_SIZE; i++) {
				array[i*ROW_SIZE + k] += 1.0; // This Line
			}
		}
	end_measurement();
	return (uint64_t*)array;
}


//int ROW_SIZE = 1024;
extern "C" uint64_t *__attribute__ ((optimize(4))) matrix_row_major(unsigned long int size, uint reps) {
	double * array = new double[size]();

	start_measurement();
	for(uint r = 0 ; r < reps; r++) 
		for(uint i= 0; i < size/ROW_SIZE; i++) {
			for (int k = 0; k < ROW_SIZE; k++) {
				array[i*ROW_SIZE + k] += 1.0; // This Line
			}
		}
	end_measurement();
	return (uint64_t*)array;
}

