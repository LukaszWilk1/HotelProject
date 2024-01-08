project "HotelManagerTests"
    kind "SharedLib"
    language "C++"
    cppdialect "C++17"

    targetdir("../bin/" .. outputdir .. "/%{prj.name}")
    objdir("../obj/" .. outputdir .. "/%{prj.name}")

    links { 
        "HotelManager"
    }

    files {
        "src/cpp/**.cpp",
        "src/include/**.h",
        "src/include/**.hpp",
        "vendor/fmt/src/**.cc"
    }

    includedirs {
        "src/include",
        "$(VCInstallDir)UnitTest\\include",
        "../HotelManager/src/include",
        "../HotelManager/src/cpp",
        "vendor/fmt/include"
    }

    libdirs {
        "$(VCInstallDir)UnitTest\\lib"
    }

    filter { "system:windows" }
        defines {
            "WINDOWS",
            "CWD=\""..os.getcwd().."/../HotelManager\""
        }

    filter { "system:linux" }
        defines {
            "LINUX",
            "CWD=\""..os.getcwd().."/../HotelManager\""
        }

    filter { "configurations:Debug" }
        runtime "Debug"
        symbols "on"
        defines {
            "DEBUG",
        }
        
    
    filter { "configurations:Release" }
        runtime "Release"
        optimize "on"
        symbols "on"
        defines {
            "NDEBUG",
        }