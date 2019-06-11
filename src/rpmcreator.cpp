/*
 */

#include "rpmcreator.h"

#include <kzip.h>

#include <kmimetype.h>

#include <QFile>
#include <QImage>
#include <QPainter>

extern "C"
{
    KDE_EXPORT ThumbCreator *new_creator()
    {
        return new RPMCreator;
    }
}


RPMCreator::RPMCreator()
{
    m_signet = new QImage( ":/images/signet.png" );
}

RPMCreator::~RPMCreator()
{
    if ( m_signet != NULL )
    {
        delete m_signet;
        m_signet = 0;
    }
}



bool RPMCreator::create ( const QString &path, int /*w*/, int /*h*/, QImage &img )
{
    bool bRet = false;

    QByteArray fn = QFile::encodeName(path);

    KMimeType::Ptr type = KMimeType::findByPath(path, 0, true);

    if (type->name() == "application/x-rpm"){
      //unpack found rpm?
    
    }
}

ThumbCreator::Flags RPMCreator::flags() const
{
    return (Flags)(DrawFrame | BlendIcon);
}


