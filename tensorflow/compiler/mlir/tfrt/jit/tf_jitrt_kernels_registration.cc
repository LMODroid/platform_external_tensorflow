/* Copyright 2021 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/compiler/mlir/tfrt/jit/tf_jitrt_kernels_registration.h"

namespace tensorflow {

namespace kernels {
TFRT_STATIC_KERNEL_REGISTRATION(RegisterTfJitRuntimeKernels);
}  // namespace kernels

}  // namespace tensorflow

#endif  // TENSORFLOW_CORE_UTIL_DETERMINISM_H_
