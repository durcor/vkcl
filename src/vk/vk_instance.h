#ifndef VK_INSTANCE_H
#define VK_INSTANCE_H

#include <vulkan/vulkan.h>

#include "../util/util_exception.h"

namespace vkcl {

	class Instance {
	public:
		Instance() : Loaded(false) {  }
		~Instance();

		void Load();

		inline VkInstance get() { return instance; }
		inline bool getLoaded() { return Loaded; }
	protected:
		void InitDebug();
		bool Loaded;
		VkInstance instance;
		VkDebugUtilsMessengerEXT debugMessenger;
	};

}

#endif
