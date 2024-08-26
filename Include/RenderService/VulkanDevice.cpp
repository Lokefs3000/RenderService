#include "pch.h"
#include "VulkanDevice.h"

#include "VkGraphicsDevice.h"

rs::GraphicsDevice* rs::vk::CreateVulkanDevice()
{
    return new VkGraphicsDevice();
}
