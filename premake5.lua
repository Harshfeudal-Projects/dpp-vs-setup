workspace "MyBot"
    configurations { "Debug32", "Release32", "Debug64", "Release64" }

    filter "configurations:*32"
       architecture "x86"

    filter "configurations:*64"
       architecture "x86_64"

    -- ---------------------------------- --

project "MyBot"
	kind          "ConsoleApp"
	language      "C++"
	cppdialect    "C++17"
	staticruntime "off"

    -- ---------------------------------- --

    files      { "src/**.cpp", "commands/**.h" }
    includedirs{ "%{wks.location}/include" }

    -- ---------------------------------- --

    filter { "action:vs2022", "Debug32" }
        libdirs    { "lib/vs2022/debug/x86" }
        links      { "dpp.lib" }
        targetdir ("%{wks.location}/bin/vs2022/debug/x86")
        objdir    ("%{wks.location}/bin/vs2022/debug/x86")

    filter { "action:vs2022", "Release32" }
        libdirs    { "lib/vs2022/debug/x86" }
        links      { "dpp.lib" }
        targetdir ("%{wks.location}/bin/vs2022/release/x86")
        objdir    ("%{wks.location}/bin/vs2022/release/x86")

    filter { "action:vs2022", "Debug64" }
        libdirs    { "lib/vs2022/debug/x64" }
        links      { "dpp.lib" }
        objdir    ("%{wks.location}/bin/vs2022/debug/x64")
        targetdir ("%{wks.location}/bin/vs2022/debug/x64")

    filter { "action:vs2022", "Release64" }
        libdirs    { "lib/vs2022/debug/x64" }
        links      { "dpp.lib" }
        objdir    ("%{wks.location}/bin/vs2022/release/x64")
        targetdir ("%{wks.location}/bin/vs2022/release/x64")

    -- ---------------------------------- --

    filter { "action:vs2019", "Debug32" }
        libdirs    { "lib/vs2019/debug/x86" }
        links      { "dpp.lib" }
        objdir    ("%{wks.location}/bin/vs2019/debug/x86")
        targetdir ("%{wks.location}/bin/vs2019/debug/x86")

    filter { "action:vs2019", "Release32" }
        libdirs    { "lib/vs2019/debug/x86" }
        links      { "dpp.lib" }
        objdir    ("%{wks.location}/bin/vs2019/release/x86")
        targetdir ("%{wks.location}/bin/vs2019/release/x86")

    filter { "action:vs2019", "Debug64" }
        libdirs    { "lib/vs2019/debug/x64" }
        links      { "dpp.lib" }
        objdir    ("%{wks.location}/bin/vs2019/debug/x64")
        targetdir ("%{wks.location}/bin/vs2019/debug/x64")
        
    filter { "action:vs2019", "Release64" }
        libdirs    { "lib/vs2019/debug/x64" }
        links      { "dpp.lib" }
        objdir    ("%{wks.location}/bin/vs2019/release/x64")
        targetdir ("%{wks.location}/bin/vs2019/release/x64")

    -- ---------------------------------- --

    filter { "system:windows", "toolset:msc" }
    	systemversion "latest"

    filter "configurations:Release"
    	runtime  "Release"
    	optimize "on"

    filter "configurations:Debug"
    	runtime  "Debug"
    	optimize "on"
