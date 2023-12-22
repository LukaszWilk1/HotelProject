project "HotelManager"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"
    staticruntime "on"

    targetdir("../bin/" .. outputdir .. "/%{prj.name}")
    objdir("../obj/" .. outputdir .. "/%{prj.name}")

    files {
        "src/cpp/**.cpp",
        "src/include/**.h",
        "src/include/**.hpp",
        "vendor/fmt/src/**.cc"
    }

    includedirs {
        "src/include",
        "vendor/fmt/include"
    }

    filter { "system:windows" }
        defines {
            "WINDOWS"
        }

    filter { "system:linux" }
        defines {
            "LINUX"
        }

    filter { "configurations:Debug" }
        buildoptions "/MTd"
        runtime "Debug"
        symbols "on"
    
    filter { "configurations:Release" }
        buildoptions "/MT"
        runtime "Release"
        optimize "on"