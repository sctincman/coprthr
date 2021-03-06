/* libocl.h
 *
 * Copyright (c) 2012 Brown Deer Technology, LLC.  All Rights Reserved.
 *
 * This software was developed by Brown Deer Technology, LLC.
 * For more information contact info@browndeertechnology.com
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License version 3 (LGPLv3)
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* DAR */


#ifndef _libocl_h
#define _libocl_h

#include "oclcall.h"

struct platform_struct {
   void* _reserved;
   void* dlh;
	struct oclent_struct* oclent;
	cl_platform_id imp_platform_id;
};

cl_int clGetPlatformIDs(
   cl_uint nplatforms,
   cl_platform_id* platforms,
   cl_uint* nplatforms_ret
);

cl_int clGetPlatformInfo(cl_platform_id a0,cl_platform_info a1,size_t a2,void* a3,size_t* a4);

#endif

