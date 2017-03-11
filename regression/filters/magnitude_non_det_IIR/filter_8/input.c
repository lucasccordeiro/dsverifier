//hp4C(8)

#include <dsverifier.h>

digital_system ds = {
    .b =  {0.002465101684208,  -0.006090103116098,   0.008129096273096,  -0.006090103116098,   0.002465101684208},
    .b_size = 5,
    .a = { 1.000000000000000,   2.818813098604120,   3.106203685850346,   1.564034195042594,   0.301883113670076},
    .a_size = 5
};

implementation impl = {
    .int_bits = 4,
    .frac_bits = 10,
    .min = -1.6,
    .max = 1.6,
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