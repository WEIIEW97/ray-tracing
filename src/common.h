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

#include "ray.h"
#include "vec3.h"
#include "interval.h"
