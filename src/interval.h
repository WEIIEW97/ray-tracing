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

class interval {
public:
  double min_, max_;
  interval() : min_(+INFINITY), max_(-INFINITY) {}
  interval(double min, double max) : min_(min), max_(max) {}

  bool contains(double x) const { return min_ <= x && x <= max_; }

  bool surrounds(double x) const { return min_ < x && x < max_; }

  double clamp(double x) const {
    if (x < min_) return min_;
    if (x > max_) return max_;
    return x;
  }

  static const interval empty, universe;
};

const static interval empty(+INFINITY, -INFINITY);
const static interval universe(-INFINITY, +INFINITY);