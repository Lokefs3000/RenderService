#pragma once

namespace rs
{
	class GraphicsDevice;
}

namespace rs::vk
{
	rs::GraphicsDevice* CreateVulkanDevice();
}