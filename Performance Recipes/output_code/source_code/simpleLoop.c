#include <stdio.h>
#include <time.h>
#include <windows.h>
double foo() {
   int b = 0;
   LARGE_INTEGER clava_timing_start_0, clava_timing_end_0, clava_timing_frequency_0;
   QueryPerformanceFrequency(&clava_timing_frequency_0);
   QueryPerformanceCounter(&clava_timing_start_0);
   for(int j = 0; j < 1000; j++) {
      printf("%d\n", b++);
   }
   QueryPerformanceCounter(&clava_timing_end_0);
   double clava_timing_duration_0 = ((clava_timing_end_0.QuadPart-clava_timing_start_0.QuadPart) / (double)clava_timing_frequency_0.QuadPart) * (1000000000);
   printf("file$simpleLoop.c->function$foo()->rank$1%f\n", clava_timing_duration_0);
   
   return b;
}

int main() {
   foo();
}
