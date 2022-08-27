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

#ifndef TENSORFLOW_CORE_KERNELS_SPARSE_SLICE_OP_H_
#define TENSORFLOW_CORE_KERNELS_SPARSE_SLICE_OP_H_

#include "tensorflow/core/framework/op_kernel.h"
#include "tensorflow/core/framework/tensor_types.h"
#include "tensorflow/core/lib/core/status.h"

namespace tensorflow {

namespace functor {

template <typename Device, typename T>
struct SparseSliceFunctor {
  void operator()(OpKernelContext* context, const Tensor& input_indices,
                  const Tensor& input_values, const Tensor& input_shape,
                  const Tensor& input_start, const Tensor& input_size,
                  typename AsyncOpKernel::DoneCallback done = nullptr) const;
};

}  // namespace functor

}  // namespace tensorflow

#endif  // TENSORFLOW_CORE_KERNELS_SPARSE_SLICE_OP_H_
