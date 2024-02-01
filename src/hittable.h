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

#include "common.h"

class hit_record {
public:
  point3 p;
  vec3 normal;
  double t;
  bool front_face;

  void set_face_normal(const ray& r, const vec3& outward_normal) {
    // NOTE: the parameter `outward_normal` is assumed to have unit length
    front_face = dot(r.direction(), outward_normal) < 0;
    normal = front_face ? outward_normal : -outward_normal;
  }
};

class hittable {
public:
  virtual ~hittable() = default;
  virtual bool hit(const ray& r, double ray_tmin, double ray_tmax,
                   hit_record& rec) const = 0;
  virtual bool hit(const ray& r, interval ray_t, hit_record& rec) const = 0;
};