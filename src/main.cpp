#include <Geode/Geode.hpp>
#include <Geode/platform/windows.hpp>
#include <Geode/modify/LoadingLayer.hpp>

using namespace geode::prelude;

class $modify(LoadingLayer) {
	void loadingFinished() {
		Mod::get()->patch(reinterpret_cast<void*>(base::getCocos() + 0x11388B), {0x90, 0x90, 0x90, 0x90, 0x90});
		Mod::get()->patch(reinterpret_cast<void*>(base::getCocos() + 0x11339D), {0xB9, 0xFF, 0xFF, 0xFF, 0x7F, 0x90, 0x90});
		Mod::get()->patch(reinterpret_cast<void*>(base::getCocos() + 0x1133C0), {0x48});
		Mod::get()->patch(reinterpret_cast<void*>(base::getCocos() + 0x1133C6), {0x48});
		Mod::get()->patch(reinterpret_cast<void*>(base::getCocos() + 0x112536), {0xEB, 0x11, 0x90});
		LoadingLayer::loadingFinished();
	} 
};