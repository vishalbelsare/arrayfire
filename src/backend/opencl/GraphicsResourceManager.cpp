/*******************************************************
 * Copyright (c) 2016, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#if defined(WITH_GRAPHICS)
#include <platform.hpp>
#include <GraphicsResourceManager.hpp>

namespace opencl
{
ShrdResVector GraphicsResourceManager::registerResources(std::vector<uint32_t> resources)
{
    ShrdResVector output;

    for (auto id: resources)
        output.emplace_back(new cl::BufferGL(getContext(), CL_MEM_WRITE_ONLY, id, NULL));

    return output;
}
}
#endif
