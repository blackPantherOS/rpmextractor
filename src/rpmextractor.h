#ifndef RPMEXTRACTOR_H
#define RPMEXTRACTOR_H

#include "extractorplugin.h"

namespace KFileMetaData
{

class RPMExtractor : public ExtractorPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.kde.kf5.kfilemetadata.ExtractorPlugin"
                      FILE "rpmextractor.json")
    Q_INTERFACES(KFileMetaData::ExtractorPlugin)

public:
    explicit RPMExtractor(QObject* parent = nullptr);

public:
    void extract(ExtractionResult* result) override;
    QStringList mimetypes() const override;
};

}

#endif
