// Copyright (c) 2010-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0


#ifndef _TRANSPORT_SHM_H
#define _TRANSPORT_SHM_H

#include <stdbool.h>
#include <stdint.h>
#include "error.h"

/** @cond INTERNAL */

typedef struct _LSTransportShm _LSTransportShm;

typedef uint64_t _LSTransportMonitorSerial;

#define MONITOR_SERIAL_INVALID  0

bool _LSTransportShmInit(_LSTransportShm** shm, LSError* lserror);
uint64_t _LSTransportShmGetSerial(_LSTransportShm* shm);
void _LSTransportShmDeinit(_LSTransportShm** shm);

/** @endcond */

#endif  /* _TRANSPORT_SHM_H */
