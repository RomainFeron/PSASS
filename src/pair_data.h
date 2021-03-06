#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <iostream>
#include <deque>
#include <algorithm>
#include <numeric>
#include <map>
#include <iomanip>
#include "parameters.h"
#include "gff_file.h"
#include "utils.h"
#include "pool_data.h"

class PairBaseData {

    public:

        PoolBaseData pool1;  // Pool 1 data
        PoolBaseData pool2;  // Pool 2 data

        float average_frequencies[6] {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};  // Average nucleotide frequencies between the two pools
        float total_pi = 0.0;  // Total pi statistic
        float within_pi = 0.0;  // Within pi statistic
        float fst = 0.0;  // Fst statistic

        PairBaseData();
        void compute_average_freq();
        void compute_total_pi();
        void compute_within_pi();
        void compute_fst();
        void update(bool output_fst_pos);
};

