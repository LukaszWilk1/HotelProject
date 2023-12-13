workspace "HotelManager"
    architecture "x64"

    configurations {
        "Debug",
        "Release"
    }

    startproject "HotelManager"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "HotelManager"