/*
 */

#ifndef _RPM_CREATOR_H_
#define _RPM_CREATOR_H_

#include <QObject>
#include <kio/thumbcreator.h>

class RPMCreator : public QObject, public ThumbCreator
{
    Q_OBJECT
public:
    RPMCreator();
    virtual ~RPMCreator();
    virtual bool create(const QString &path, int w, int h, QImage &img);
    virtual Flags flags() const;
private:
    QImage* m_signet;
};

#endif 
