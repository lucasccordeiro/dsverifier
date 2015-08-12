#include "../../../bmc/dsverifier.h"

digital_system control = {
        .a = { 1.0, 0.4, -0.19, 0.014, 0.0},
        .a_size = 5,
        .b = { 0.01, -0.005, -0.0034, 0.0008 },
        .b_size = 4,
        .sample_time = 0.01
};

implementation impl = {
        .int_bits = 3,
        .frac_bits = 16,
        .delta = 0.25,
        .max = 1.0,
        .min = -1.0,
        .scale = 1
};

digital_system plant = {
        .b = { 2.0, -4.0 },
        .b_size = 2,
        .a = { 1.0, -0.1,  -0.3 },
        .a_size = 3
};
