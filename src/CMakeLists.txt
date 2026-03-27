qt_add_executable(QtAutoUpdaterDemo
    main.cpp
    mainwindow.cpp
    mainwindow.h
)

target_link_libraries(QtAutoUpdaterDemo PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    Qt6::Network
    QSimpleUpdater
)

install(TARGETS QtAutoUpdaterDemo DESTINATION bin)