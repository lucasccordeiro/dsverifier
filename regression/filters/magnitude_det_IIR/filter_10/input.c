//lp12C(10)

#include <dsverifier.h>

digital_system ds = {
    .b =  {  0.001916809033697,   0.004038416480731,  0.010451364398269,   0.016959371226226,   0.025329508305724,   0.031055395772669, 0.033518946589249,   0.031055395772669,   0.025329508305724,   0.016959371226226,   0.010451364398269,   0.004038416480731, 0.001916809033697 },
    .b_size = 13,
    .a = { 1.000000000000000,  -3.642911258409105,   7.583224683282682, -10.373617075128880,  10.395672136338522,  -7.790590128278820, 4.486467114241628,  -1.965095591811529,   0.653821201419611,  -0.158215120319786,   0.026899271971745,  -0.002776014423442, 0.000141458141255},
    .a_size = 13
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