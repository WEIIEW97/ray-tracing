/*
* Copyright (c) 2022-2024, William Wei. All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the 'License');
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an 'AS IS' BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include <cmath>
#include <climits>
#include <memory>
#include <iostream>
#include <numbers>
#include <random>



using std::shared_ptr;
using std::make_shared;
using std::cout, std::clog, std::cerr, std::endl;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = std::numbers::pi;

inline double degrees_to_radians(double degrees) {
  return degrees * pi / 180.f;
}

inline double radians_to_degrees(double radians) {
  return radians * 180.0f / pi;
}

inline double random_double_c() {
  // returns a random real in [0,1)
  return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
  // returns a random real in [min. max)
  return min + (max-min)*random_double_c();
}

inline double random_double() {
  static std::uniform_real_distribution<double> distribution(0.0, 1.0);
  static std::mt19937 generator;
  return distribution(generator);
}


#include "ray.h"
#include "vec3.h"
#include "interval.h"