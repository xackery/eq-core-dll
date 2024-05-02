# eq-core-dll
Core DLL for EverQuest to do patching, opt in to features

## Requirements
- Visual Studio 2022
- Windows 10 SDK (You can find it via the Visual Studio Installer program, modify, individual components, if you get an error about it on compile)

## Usage

- git submodule init
- git submodule update

- Fork this repo (or clone, and make your copy private)
- Open the eq-core-dll-visualstudio20##.sln file (based on version you have installed)
- Click Build, verify success
- Find src/_options.h, and set values to true where you want enabled, or follow instructions for custom values
- Click Build again, verify success
- Copy bin/dinput8.dll to your eq client directory