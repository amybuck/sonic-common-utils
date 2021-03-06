/*
 * Copyright (c) 2016 Dell Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * THIS CODE IS PROVIDED ON AN *AS IS* BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 * LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS
 * FOR A PARTICULAR PURPOSE, MERCHANTABLITY OR NON-INFRINGEMENT.
 *
 * See the Apache Version 2.0 License for specific language governing
 * permissions and limitations under the License.
 */

/*!
 * \file   std_type_defs.h
 * \brief  common definitions
 */

#ifndef _STD_TYPE_DEFS_H_
#define _STD_TYPE_DEFS_H_

#include <stdbool.h>
/*
 *  common definition  like uint32_t, int32_t, uint16_t are already
 *  defined in std c libraries.
 *  Please check standard definitions before adding here.
 */
#include <stdint.h>

/**
 * This is our only typedef that is standard.
 */
typedef unsigned int uint_t;

#endif
