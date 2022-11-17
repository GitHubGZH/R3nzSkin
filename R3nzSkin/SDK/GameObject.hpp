#pragma once

#include <cstdint>
#include <string>

#include "../RetSpoofInvoker.hpp"
#include "../offsets.hpp"
#include "Pad.hpp"

class GameObject {
public:
	CLASS_GETTER_P(std::string, get_name, offsets::GameObject::Name)
	CLASS_GETTER(std::int32_t, get_team, offsets::GameObject::Team)


	[[nodiscard]] bool isLaneMinion() const noexcept { return invoker.invokeThiscall<bool, offsets::GameObject::VTable::IsLaneMinion>(std::uintptr_t(this)); }
	[[nodiscard]] bool isEliteMinion() const noexcept { return invoker.invokeThiscall<bool, offsets::GameObject::VTable::IsEliteMinion>(std::uintptr_t(this)); }
	[[nodiscard]] bool isEpicMinion() const noexcept { return invoker.invokeThiscall<bool, offsets::GameObject::VTable::IsEpicMinion>(std::uintptr_t(this)); }
	[[nodiscard]] bool isMinion() const noexcept { return invoker.invokeThiscall<bool, offsets::GameObject::VTable::IsMinion>(std::uintptr_t(this)); }
	[[nodiscard]] bool isJungle() const noexcept { return invoker.invokeThiscall<bool, offsets::GameObject::VTable::IsJungle>(std::uintptr_t(this)); }
};
