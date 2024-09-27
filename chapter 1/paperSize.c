#include <stdio.h>
int main()
{
    float a0_a,a0_b,a1_a,a1_b,a2_a,a2_b,a3_a,a3_b,a4_a,a4_b,a5_a,a5_b,a6_a,a6_b,a7_a,a7_b,a8_a,a8_b;
    a0_a = 1189;
    a0_b = 841;
    printf("A0: %fmm x %fmm",a0_a,a0_b);
    a1_a = a0_b;
    a1_b = a0_a/2;
    printf("A1: %fmm x %fmm",a1_a,a1_b);
    a2_a = a1_b;
    a2_b = a1_a/2;
    printf("A2: %fmm x %fmm",a2_a,a2_b);
    a3_a = a2_b;
    a3_b = a2_a/2;
    printf("A3: %fmm x %fmm",a3_a,a3_b);
    a4_a = a3_b;
    a4_b = a3_a/2;
    printf("A4: %fmm x %fmm",a4_a,a4_b);
    a5_a = a4_b;
    a5_b = a4_a/2;
    printf("A5: %fmm x %fmm",a5_a,a5_b);
    a6_a = a5_b;
    a6_b = a5_a/2;
    printf("A6: %fmm x %fmm",a6_a,a6_b);
    a7_a = a6_b;
    a7_b = a6_a/2;
    printf("A7: %fmm x %fmm",a7_a,a7_b);
    a8_a = a7_b;
    a8_b = a7_a/2;
    printf("A8: %fmm x %fmm",a8_a,a8_b);
    return 0;
} 