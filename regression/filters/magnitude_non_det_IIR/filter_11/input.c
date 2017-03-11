//hp12C(11)

#include <dsverifier.h>

digital_system ds = {
    .b =  {0.013625188788510,  -0.101049957292186,   0.384363261306428,  -0.972879705046480,   1.807716098818892,  -2.583515467825938, 2.903635703934429,  -2.583515467825938,   1.807716098818892,  -0.972879705046480,   0.384363261306428,  -0.101049957292186, 0.013625188788510},
    .b_size = 13,
    .a = { 1.000000000000000,  -1.276247689889290,   2.776103549835551,  -2.645110682028040,   2.795558536616230,  -1.939083083416806, 1.253445071015432,  -0.604568772051592,   0.245380454624386,  -0.074737017924551,   0.017001295237337,  -0.002513121328463, 0.000185788123619 },
    .a_size = 13
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