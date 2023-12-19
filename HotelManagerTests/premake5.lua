project "HotelManagerTests"
    kind "SharedLib"
    language "C++"
    cppdialect "C++17"

    targetdir("../bin/" .. outputdir .. "/%{prj.name}")
    objdir("../obj/" .. outputdir .. "/%{prj.name}")

    links { "HotelManager" }

    files {
        "src/cpp/**.cpp",
        "src/include/**.h",
        "src/include/**.hpp"
    }

    includedirs {
        "src/include",
        "$(VCInstallDir)UnitTest\\include"
    }

    libdirs {
        "$(VCInstallDir)UnitTest\\lib"
    }

    filter { "system:windows" }
        defines {
            "WINDOWS",
        }

    filter { "system:linux" }
        defines {
            "LINUX"
        }

    filter { "configurations:Debug" }
        runtime "Debug"
        symbols "on"
        defines {
            "DEBUG"
        }
        
    
    filter { "configurations:Release" }
        runtime "Release"
        optimize "on"
        symbols "on"
        defines {
            "NDEBUG"
        }