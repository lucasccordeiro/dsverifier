//flp10Hann

#include <dsverifier.h>

digital_system ds = {
    .b = {  0,  -0.007137447333385,  -0.021279756564364,   0.060469424180084,   0.270427486053875,   0.395040587327577, 0.270427486053875,   0.060469424180084,  -0.021279756564364,  -0.007137447333385,                   0 },
    .b_size = 11,
    .a = {1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .a_size = 11
};

filter_parameters filter = {
    .Ac = 0.501187233627272,
 //   .Ar = 0.501187233627272,
 //   .Ap = 0.501187233627272,
    
//    .wp = 0.39,
    .wc = 0.4,
 //   .wr = 0.41,
    .type = 1
};


implementation impl = {
    .int_bits = 5,
    .frac_bits = 10,
    .min = -1.6,
    .max = 1.6,
};
