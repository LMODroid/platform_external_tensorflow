/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

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

// This file contains APIs that assume a StreamExecutor is backed by CUDA.
// It reaches into the CUDA implementation to activate an underlying CUDA
// context.
//
// Having this file separate from gpu/gpu_executor.h means that dependent
// code does not also have to depend on cuda.h.

#ifndef TENSORFLOW_STREAM_EXECUTOR_GPU_GPU_ACTIVATION_H_
#define TENSORFLOW_STREAM_EXECUTOR_GPU_GPU_ACTIVATION_H_

#include "tensorflow/compiler/xla/stream_executor/gpu/gpu_activation.h"

#endif  // TENSORFLOW_STREAM_EXECUTOR_GPU_GPU_ACTIVATION_H_
