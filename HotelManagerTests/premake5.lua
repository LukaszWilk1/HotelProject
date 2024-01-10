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
        "vendor/fmt/include",
        "../HotelManager/vendor/yaml-cpp/include"
    }

    links {
        "yaml-cpp"
    }

    libdirs {
        "$(VCInstallDir)UnitTest\\lib"
    }

    filter { "system:windows" }
        defines {
            "WINDOWS",
            "YAML_CPP_STATIC_DEFINE",
            "CWD=\""..os.getcwd().."/../HotelManager\""
        }

    filter { "system:linux" }
        defines {
            "LINUX",
            "YAML_CPP_STATIC_DEFINE",
            "CWD=\""..os.getcwd().."/../HotelManager\""
        }

    filter { "configurations:Debug" }
        buildoptions "/MTd"
        runtime "Debug"
        symbols "on"
        defines {
            "DEBUG",
            "YAML_CPP_STATIC_DEFINE",
        }
        
    
    filter { "configurations:Release" }
        buildoptions "/MT"
        runtime "Release"
        optimize "on"
        symbols "on"
        defines {
            "NDEBUG",
            "YAML_CPP_STATIC_DEFINE",
        }
