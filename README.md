# rpmextractor

Preview RPM files and metainfo in Plasma/Dolphin
RPM Extractor formerly RPMThumbnail Creator
================================

Plasma thumbnail-plugin that generates small images (thumbnails)
for RPM files, to be displayed, for example, on Konqueror and Dolphin file managers.


DEPENDENCIES
`````````````
The following libraries and development packages are needed:
KDE >=5.8.x
QT  >=5.11.x


INSTALLATION
`````````````
     mkdir build
     cd build
     cmake -DCMAKE_INSTALL_PREFIX=`kde4-config --prefix` ..         <- DON'T forget ..
     make
     su -c 'make install'
     kbuildsycoca4

LICENCE
````````
See the LGPL 3.0 (GNU Lesser General Public License)
http://www.fsf.org/licenses/lgpl.html
http://www.gnu.org/licenses/lgpl-3.0.txt


DEVELOPER
``````````

