//flp10

#include <dsverifier.h>

digital_system ds = {
    .b = {  -0.000000000000000,  -0.078956936960110,  -0.066195013044976,   0.100513280354210,   0.327649865790801,   0.433977607720150, 0.327649865790801,   0.100513280354210,  -0.066195013044976,  -0.078956936960110,  -0.000000000000000 },
    .b_size = 11,
    .a = {1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .a_size = 11
};

filter_parameters filter = {
    .Ap =  0.8,
    .Ac =  0.707945784384138,
    .Ar = 0.5,
    .wp = 0.3,
    .wc = 0.4,
    .wr = 0.5,
    .type = 1
};

implementation impl = {
    .int_bits = 4,
    .frac_bits = 10,
    .min = -1.6,
    .max = 1.6,
};