// Copyright (c) 2014-2018 LG Electronics, Inc.
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

#ifndef _LOG_H
#define _LOG_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdbool.h>
#include <PmLogLib.h>

#include <luna-service2/lunaservice.h>

#include "log_ids.h"

/** use these for key-value pair printing */
#define LOG_LS_TRACE(...)                    PMLOG_TRACE(__VA_ARGS__)
#define LOG_LS_DEBUG(...)                    (void) PmLogDebug(PmLogGetLibContext(), ##__VA_ARGS__)
#define LOG_LS_INFO(msgid, kvcount, ...)     (void) PmLogInfo(PmLogGetLibContext(), msgid, kvcount, ##__VA_ARGS__)
#define LOG_LS_WARNING(msgid, kvcount, ...)  (void) PmLogWarning(PmLogGetLibContext(), msgid, kvcount, ##__VA_ARGS__)
#define LOG_LS_ERROR(msgid, kvcount, ...)    (void) PmLogError(PmLogGetLibContext(), msgid, kvcount, ##__VA_ARGS__)
#define LOG_LS_CRITICAL(msgid, kvcount, ...) (void) PmLogCritical(PmLogGetLibContext(), msgid, kvcount, ##__VA_ARGS__)

#define LOG_LSERROR(...)     (void) LSErrorLog(PmLogGetLibContext(), ##__VA_ARGS__)



#endif  /* _LOG_H */
