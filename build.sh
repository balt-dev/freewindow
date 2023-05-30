rm -rf build/

# remember to actually set these..
export SPLAT_DIR=/home/balt/Documents/xwin
export TOOLCHAIN_REPO=/home/balt/Documents/clang-msvc

export HOST_ARCH=x86
export MSVC_BASE=$SPLAT_DIR/crt
export WINSDK_BASE=$SPLAT_DIR/sdk
# TODO: get this from the thing..
export WINSDK_VER=10.0.20348
# change this to your llvm version!!!
export LLVM_VER=15
export CLANG_VER=$LLVM_VER

# you can also use `-G Ninja` here
cmake \
  -DCMAKE_TOOLCHAIN_FILE=$TOOLCHAIN_REPO/clang-cl-msvc.cmake \
  -DCMAKE_BUILD_TYPE=Release \
  -DGEODE_DISABLE_FMT_CONSTEVAL=1 \
  -B build
  
cmake --build build --config Release
