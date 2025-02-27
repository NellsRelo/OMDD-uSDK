# About
This is an Unofficial SDK for Orcs Must Die! Deathtrap, generated via reflection through RE-UE4SS-generated UHT Headers. Some blueprints from the game have been dummied out, as have some C++ classes.

It also contains a WIP Mod, OMDLib, which will be a general purpose Mod Loader & Utility library helpful for other BP and Lua mods.

This may be used as a base for BP Modding as well as skin/texture modding.

## Set-Up
For legal purposes, as well as to keep the repo from being ridiculously hefty, the uSDK is provided with the bare minimum to get it to run: Required plugins(free or dummied), dummied c++ classes, as well as a few content files for the OMDLib BP mod.  This means we'll need to build the project to use the uSDK.

To get started, we'll need Unreal Engine 5.3.2 and Visual Studio 2022 or JetBrains Rider. These instructions will assume you're using Visual Studio.

### Required
- Epic Games Launcher
- Unreal Engine 5.3.2
- Visual Studio 2022 (not code) or JetBrains Rider

### Preparing the .uproject
1. Download and unzip the repository into your `C:/Users/USERNAME/Documents/Unreal Projects/` folder and rename the resulting folder`OMDD`.
2. Right click `OMDD.uproject` and select "Generate Visual Studio Project Files."
3. Wait until the progress bar completes.

If there are any errors that cause this to fail, request assistance on the OMD Modding Discord.

### Compiling the C++
Before we can compile the project, we need to ensure all required plugins are available. If you haven't already, install the following plugins:
  - [NVidia DLSS UE 5.3 Plugin 3.7.20](https://dlss.download.nvidia.com/uebinarypackages/UE5.3_DLSS_3.7.20_Plugin_2024.09.06.zip)
  1. Open the .zip file and navigate to the Plugins folder.
  2. Unzip the `DLSS` folder into your `UE_5.3/Engine/Plugins/Marketplace` folder.
  3. Launch Unreal Engine 5.3. (NOT THE OMDD PROJECT)
  4. Select `Edit` -> `Plugins`.
  5. Search for "DLSS" in the search bar.
  6. Confirm the "NVIDIA DLSS" plugins show up.

Once you have the required plugins, you can continue.
1. Open the newly-created `OMDD.sln` file in Visual Studio 2022.
2. In the right pane, open the `Games` folder and right-click `OMDD`.
3. Select "Set as Startup project."
4. In the toolbar, look for the gear icon that says "OMDD."
5. Ensure the dropdown two to the left of the gear icon is set to "Development Editor."
6. Go to `Build -> Build Solution`.

If there are any errors that cause this to fail, request assistance on the OMD Modding Discord.

### Configuring and Building with the Editor
You should now be able to open the project in Unreal Editor. Before you get started with BP mods, you'll want to make a couple quick settings adjustments, and attempt a build from within the editor.

1. In Epic Games Launcher, Navigate to `Unreal Engine -> Library`
2. Under `My Projects`, select `OMDD`. 

_Note:_ If you are prompted to compile due to files being compiled in a different version, allow it to proceed. If it fails, rebuild the project in Visual Studio, and try again. If that doesn't work, request assistance on the OMD Modding Discord.

3. With the OMDD project open, go to `Platforms -> Packaging Settings.`
4. Ensure only the following checkboxes are ticked:
- Use Pak File
- Use Io Store
- Generate Chunks
- Include Prerequisites Installer
5. Close the settings.
6. Go to `Platforms -> Windows -> Package Content.`
7. Select a folder to package the content into. I recommend a `Packaged` or `pkg` folder within the project folder.
8. Wait for the project to build and package itself.

If the build fails, inspect the `Output Log` for any obvious errors. If you're stumped, request assistance on the OMD Modding Discord.

If the build succeeds, you're ready to start BP modding. Happy modding!
