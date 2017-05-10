//fhp30Hann

#include <dsverifier.h>

digital_system ds = {
    .b = {   0,   0.000236294439412,   0.000622213219915,  -0.001489046458504,  -0.004553510274733,  -0.000000000000000, 0.011622706400752,  0.010472649512177,  -0.014762966769104,  -0.033027556557890,   0.000000000000000,   0.063170270983013, 0.056417801993033,  -0.089516595811128,  -0.299461574802337,   0.600077307320892,  -0.299461574802337,  -0.089516595811128, 0.056417801993033,   0.063170270983013,   0.000000000000000,  -0.033027556557890,  -0.014762966769104,   0.010472649512177, 0.011622706400752,  -0.000000000000000,  -0.004553510274733,  -0.001489046458504,   0.000622213219915,   0.000236294439412, 0},
    .b_size = 31,
    .a = {1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    .a_size = 31
};

filter_parameters filter = {
    .Ap =  0.8,
    .Ac =  0.707945784384138,
    .Ar = 0.5,
    .wp = 0.5,
    .wc = 0.4,
    .wr = 0.3,
    .type = 2
};

implementation impl = {
    .int_bits = 4,
    .frac_bits = 10,
    .min = -1.6,
    .max = 1.6,
};