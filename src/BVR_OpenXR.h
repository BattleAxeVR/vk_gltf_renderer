//--------------------------------------------------------------------------------------
// Copyright (c) 2025 BattleAxeVR. All rights reserved.
//--------------------------------------------------------------------------------------

#ifndef BVR_OPENXR_H_
#define BVR_OPENXR_H_

#include "BVR_defines.h"

#if ENABLE_OPENXR

#include <vulkan/vulkan_core.h>
#include "nvvk/resource_allocator.hpp"
#include <glm/glm.hpp>
#include <vector>
#include <string>

NS_BVR_BEGIN

class OpenXR
{
public:

OpenXR();
virtual ~OpenXR();

bool init();
bool update();
bool shutdown();

bool is_initialized() const 
{
	return is_initialized_;
}

private:
  bool is_initialized_ = false;
};

NS_END

#endif // ENABLE_OPENXR

#endif // BVR_OPENXR_H_

