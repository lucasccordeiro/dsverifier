//flp10ESTEqui

#include <dsverifier.h>

digital_system ds = {
    .b =  {    0.250277373121213,   0.000110638127606,  -0.000106171522040,   0.000105228545074,  -0.000104188663641,   0.000104226626419, -0.000104188663641,   0.000105228545074,  -0.000106171522040,   0.000110638127606,   0.250277373121213   },
    .b_size = 11,
    .a = {1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .a_size = 11
};

filter_parameters filter = {
    .Ap = 0.500535816345400,
    .Ar = 0.499498189804359,
    .wp = 0,
    .wr = 0.0041,
    .type = 1
};

implementation impl = {
    .int_bits = 5,
    .frac_bits = 10,
    .min = -1.6,
    .max = 1.6,
};