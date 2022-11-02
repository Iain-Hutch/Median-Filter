// header file for the filter

#ifndef FILTER_S
#define FILTER_S

unsigned char * pad_image(unsigned char * src_img, int cols, int rows, int channels, int size);

unsigned char quick_median(unsigned char * arr, int lo, int hi, int k);

void swap(unsigned char* first, unsigned char* second);

void find_median(unsigned char *src_img, unsigned char *out_img, int row, int col, int channels, int size, int sd2, int col_offset, int row_size);

#endif