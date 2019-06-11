
if(librpm_FOUND AND KF5Config_FOUND AND Qt5Gui_FOUND)
    add_library(kfilemetadata_rpmextractor MODULE rpmextractor.cpp )
    target_link_libraries( kfilemetadata_rpmextractor
        KF5::FileMetaData
        KF5::ConfigCore
        Qt5::Xml
        Qt5::Gui
        librpm
    )

    set_target_properties(kfilemetadata_rpmextractor PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/kf5/kfilemetadata")
    install(
    TARGETS kfilemetadata_rpmextractor
    DESTINATION ${PLUGIN_INSTALL_DIR}/kf5/kfilemetadata)
endif()

target_link_libraries(rpmthumbnail ${KDE4_KIO_LIBS} )

install(TARGETS rpmthumbnail DESTINATION ${PLUGIN_INSTALL_DIR} )

install(FILES  rpmthumbnail.desktop DESTINATION ${SERVICES_INSTALL_DIR})
