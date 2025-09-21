cmake_minimum_required(VERSION 3.16)

project(facturadorsw VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        facturadormw.cpp
        facturadormw.hpp
        facturadormw.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    find_package(Qt6 REQUIRED COMPONENTS Core)

    qt_add_executable(facturadorsw
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        rsc.qrc
        logindialog.hpp logindialog.cpp logindialog.ui
        clientedialog.hpp clientedialog.cpp clientedialog.ui
        productodialog.hpp productodialog.cpp productodialog.ui

        util/helper.hpp util/helper.cpp
        vehiculodialog.hpp vehiculodialog.cpp vehiculodialog.ui

        comprobantedialog.hpp comprobantedialog.cpp comprobantedialog.ui
        header.hpp header.cpp header.ui
        notasframe.hpp notasframe.cpp notasframe.ui
        guiaremisiondialog.hpp guiaremisiondialog.cpp guiaremisiondialog.ui
        bajadialog.hpp bajadialog.cpp bajadialog.ui
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET facturadorsw APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(facturadorsw SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(facturadorsw
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(facturadorsw PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(facturadorsw PRIVATE Qt6::Core)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.facturadorsw)
endif()
set_target_properties(facturadorsw PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS facturadorsw
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(facturadorsw)
endif()
