
set(RPMThumbnail_SRCS rpmcreator.cpp)

qt4_add_resources(RPMThumbnail_SRCS rpmthumbnail.qrc)

kde4_add_plugin(rpmthumbnail ${RPMThumbnail_SRCS})

target_link_libraries(rpmthumbnail ${KDE4_KIO_LIBS} )

install(TARGETS rpmthumbnail DESTINATION ${PLUGIN_INSTALL_DIR} )

install(FILES  rpmthumbnail.desktop DESTINATION ${SERVICES_INSTALL_DIR})
