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
        "vendor/fmt/include",
        "vendor/yaml-cpp/include"
    }

    links {
        "yaml-cpp"
    }

    filter { "system:windows" }
        defines {
            "WINDOWS",
            "YAML_CPP_STATIC_DEFINE",
            "CWD=\""..os.getcwd().."\""
        }

    filter { "system:linux" }
        defines {
            "LINUX",
            "YAML_CPP_STATIC_DEFINE",
            "CWD=\""..os.getcwd().."\""
        }

    filter { "configurations:Debug" }
        buildoptions "/MTd"
        runtime "Debug"
        symbols "on"
    
    filter { "configurations:Release" }
        buildoptions "/MT"
        runtime "Release"
        optimize "on"