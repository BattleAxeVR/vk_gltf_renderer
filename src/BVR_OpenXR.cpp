//--------------------------------------------------------------------------------------
// Copyright (c) 2025 BattleAxeVR. All rights reserved.
//--------------------------------------------------------------------------------------

#include "BVR_defines.h"

#if ENABLE_OPENXR

#include "BVR_OpenXR.h"

NS_BVR_BEGIN

OpenXR::OpenXR()
{
}

OpenXR::~OpenXR()
{
}

bool OpenXR::init()
{
	if(is_initialized_)
	{
		return false;
	}

	is_initialized_ = true;
	return true;
}

bool OpenXR::update()
{
	if(!is_initialized_)
	{
		return false;
	}

	return true;
}

bool OpenXR::shutdown()
{
	if(!is_initialized_)
	{
		return false;
	}

	is_initialized_ = false;

	return true;
}

NS_END

#endif // ENABLE_OPENXR



